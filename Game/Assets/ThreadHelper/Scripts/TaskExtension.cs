using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UnityThreading
{
	public static class TaskExtension
	{
        /// <summary>
        /// Waits for the completion of all tasks in the Enumerable.
        /// </summary>
		public static void WaitAll(this IEnumerable<Task> tasks)
		{
			foreach (var task in tasks)
				task.Wait();
		}

        /// <summary>
        /// Invokes the given action with the set result of the task when the task succeeded.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task OnResult(this Task task, Action<object> action)
		{
			return task.OnResult(action, null);
		}

        /// <summary>
        /// Invokes the given action with the set result of the task when the task succeeded.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task OnResult(this Task task, Action<object> action, DispatcherBase target)
		{
			return task.WhenSucceeded(t => action(t.RawResult), target);
		}

        /// <summary>
        /// Invokes the given action with the set result of the task when the task succeeded.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task OnResult<T>(this Task task, Action<T> action)
		{
			return task.OnResult<T>(action, null);
		}

        /// <summary>
        /// Invokes the given action with the set result of the task when the task succeeded.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task OnResult<T>(this Task task, Action<T> action, DispatcherBase target)
		{
			return task.WhenSucceeded(t => action((T)t.RawResult), target);
		}

        /// <summary>
        /// Invokes the given action with the set result of the task when the task succeeded.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> OnResult<T>(this Task<T> task, Action<T> action)
		{
			return task.OnResult<T>(action, null);
		}

        /// <summary>
        /// Invokes the given action with the set result of the task when the task succeeded.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task<T> OnResult<T>(this Task<T> task, Action<T> action, DispatcherBase actionTarget)
		{
			return task.WhenSucceeded<T>(t => action(t.Result), actionTarget);
		}

		#region Succeeded

        /// <summary>
        /// The given Action will be performed when the task succeeds.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenSucceeded<T>(this Task<T> task, Action action)
		{
			return task.WhenSucceeded<T>(t => action(), null);
		}

        /// <summary>
        /// The given Action will be performed when the task succeeds.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenSucceeded<T>(this Task<T> task, Action<Task<T>> action)
		{
			return task.WhenSucceeded<T>(action, null);
		}

        /// <summary>
        /// The given Action will be performed when the task succeeds.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenSucceeded<T>(this Task<T> task, Action<Task<T>> action, DispatcherBase target)
		{
			Action<Task<T>> perform = t =>
			{
				if (target == null)
					action(t);
				else
					target.Dispatch(() => { if (t.IsSucceeded) action(t); });
			};

			return task.WhenEnded<T>(t => { if (t.IsSucceeded) perform(t); }, null);
		}

        /// <summary>
        /// The given Action will be performed when the task succeeds.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task WhenSucceeded(this Task task, Action action)
		{
			return task.WhenEnded(t => {if (t.IsSucceeded) action(); } );
		}

        /// <summary>
        /// The given Action will be performed when the task succeeds.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task WhenSucceeded(this Task task, Action<Task> action)
		{
			return task.WhenEnded(t => { if (t.IsSucceeded) action(t); });
		}

        /// <summary>
        /// The given Action will be performed when the task succeeds.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task WhenSucceeded(this Task task, Action<Task> action, DispatcherBase actiontargetTarget)
		{
			Action<Task> perform = t =>
			{
				if (actiontargetTarget == null)
					action(t);
				else
					actiontargetTarget.Dispatch(() => { if (t.IsSucceeded) action(t); });
			};

			return task.WhenEnded(t => { if (t.IsSucceeded) perform(t); }, null);
		}

		#endregion

		#region Failed

        /// <summary>
        /// The given Action will be performed when the task fails.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenFailed<T>(this Task<T> task, Action action)
		{
			return task.WhenFailed<T>(t => action(), null);
		}

        /// <summary>
        /// The given Action will be performed when the task fails.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenFailed<T>(this Task<T> task, Action<Task<T>> action)
		{
			return task.WhenFailed<T>(action, null);
		}

        /// <summary>
        /// The given Action will be performed when the task fails.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenFailed<T>(this Task<T> task, Action<Task<T>> action, DispatcherBase target)
		{
			return task.WhenEnded<T>(t => { if (t.IsFailed) action(t); }, target);
		}

        /// <summary>
        /// The given Action will be performed when the task fails.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task WhenFailed(this Task task, Action action)
		{
			return task.WhenEnded(t => { if (t.IsFailed) action(); });
		}

        /// <summary>
        /// The given Action will be performed when the task fails.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task WhenFailed(this Task task, Action<Task> action)
		{
			return task.WhenEnded(t => { if (t.IsFailed) action(t); });
		}

        /// <summary>
        /// The given Action will be performed when the task fails.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task WhenFailed(this Task task, Action<Task> action, DispatcherBase target)
		{
			return task.WhenEnded(t => { if (t.IsFailed) action(t); }, target);
		}

		#endregion

		#region Ended

        /// <summary>
        /// The given Action will be performed when the task ends.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenEnded<T>(this Task<T> task, Action action)
		{
			return task.WhenEnded<T>(t => action(), null);
		}

        /// <summary>
        /// The given Action will be performed when the task ends.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenEnded<T>(this Task<T> task, Action<Task<T>> action)
		{
			return task.WhenEnded<T>(action, null);
		}

        /// <summary>
        /// The given Action will be performed when the task ends.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task<T> WhenEnded<T>(this Task<T> task, Action<Task<T>> action, DispatcherBase target)
		{
			Action<Task<T>> perform = t =>
			{
				if (target == null)
					action(t);
				else
					target.Dispatch(() => action(t));
			};

			var ended = false;
			var syncRoot = new object();
			task.TaskEnded += () =>
			{
				lock (syncRoot)
				{
					if (ended)
						return;

					ended = true;
					perform(task);
				}
			};
			lock (syncRoot)
			{
				if (!ended && task.HasEnded)
				{
					ended = true;
					perform(task);
				}
			}

			return task;
		}

        /// <summary>
        /// The given Action will be performed when the task ends.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task WhenEnded(this Task task, Action action)
		{
			return task.WhenEnded(t => action());
		}

        /// <summary>
        /// The given Action will be performed when the task ends.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <returns>This task.</returns>
		public static Task WhenEnded(this Task task, Action<Task> action)
		{
			return task.WhenEnded(t => action(t), null);
		}

        /// <summary>
        /// The given Action will be performed when the task ends.
        /// </summary>
        /// <param name="action">The action to perform.</param>
        /// <param name="target">The DispatcherBase to perform the action on.</param>
        /// <returns>This task.</returns>
		public static Task WhenEnded(this Task task, Action<Task> action, DispatcherBase target)
		{
			Action<Task> perform = t =>
				{
					if (target == null)
						action(t);
					else
						target.Dispatch(() => action(t));
				};

			var ended = false;
			var syncRoot = new object();
			task.TaskEnded += () =>
			{
				lock (syncRoot)
				{
					if (ended)
						return;

					ended = true;
					perform(task);
				}
			};
			lock (syncRoot)
			{
				if (!ended && task.HasEnded)
				{
					ended = true;
					perform(task);
				}
			}

			return task;
		}

		#endregion

        /// <summary>
        /// Starts the given Task when this Task ended successfully.
        /// </summary>
        /// <param name="followingTask">The task to start.</param>
        /// <returns>This task.</returns>
		public static Task Then(this Task that, Task followingTask)
		{
			TaskDistributor target = null;
			if (ThreadBase.CurrentThread is TaskWorker)
				target = ((TaskWorker)ThreadBase.CurrentThread).TaskDistributor;

			return that.Then(followingTask, target);
		}

        /// <summary>
        /// Starts the given Task when this Task ended successfully.
        /// </summary>
        /// <param name="followingTask">The task to start.</param>
        /// <param name="target">The DispatcherBase to start the following task on.</param>
        /// <returns>This task.</returns>
		public static Task Then(this Task that, Task followingTask, DispatcherBase target)
		{
			that.WhenFailed(() =>
			{
				followingTask.Abort();
			});
			that.WhenSucceeded(() =>
			{
				if (target != null)
					followingTask.Run(target);
				else if (ThreadBase.CurrentThread is TaskWorker)
					followingTask.Run(((TaskWorker)ThreadBase.CurrentThread).TaskDistributor);
				else
					followingTask.Run();
			});
			return that;
		}

        /// <summary>
        /// Starts this Task when the other Task ended successfully.
        /// </summary>
        /// <param name="followingTask">The task to await.</param>
        /// <returns>This task.</returns>
		public static Task Await(this Task that, Task taskToWaitFor)
		{
			taskToWaitFor.Then(that);
			return that;
		}

        /// <summary>
        /// Starts this Task when the other Task ended successfully.
        /// </summary>
        /// <param name="followingTask">The task to await.</param>
        /// <param name="target">The DispatcherBase to start this task on.</param>
        /// <returns>This task.</returns>
		public static Task Await(this Task that, Task taskToWaitFor, DispatcherBase target)
		{
			taskToWaitFor.Then(that, target);
			return that;
		}

        /// <summary>
        /// Converts this Task.
        /// </summary>
        /// <param name="that"></param>
        /// <returns>The converted task.</returns>
		public static Task<T> As<T>(this Task that)
		{
			return (Task<T>)that;
		}

        /// <summary>
        /// Starts the given Action when any Task in the Enumerable has ended.
        /// </summary>
        /// <param name="action">The action to start.</param>
        /// <returns>This Enumerable of Tasks.</returns>
		public static IEnumerable<Task> ContinueWhenAnyEnded(this IEnumerable<Task> tasks, Action action)
		{
			return tasks.ContinueWhenAnyEnded(t => action());
		}

        /// <summary>
        /// Starts the given Action when any Task in the Enumerable has ended.
        /// </summary>
        /// <param name="action">The action to start.</param>
        /// <returns>This Enumerable of Tasks.</returns>
		public static IEnumerable<Task> ContinueWhenAnyEnded(this IEnumerable<Task> tasks, Action<Task> action)
		{
			var syncRoot = new object();
			var done = false;
			foreach (var task in tasks)
			{
				task.WhenEnded(t =>
				{
					lock (syncRoot)
					{
						if (done)
							return;

						done = true;
						action(t);
					}
				});
			}

			return tasks;
		}

        /// <summary>
        /// Starts the given Action when all Tasks in the Enumerable have ended.
        /// </summary>
        /// <param name="action">The action to start.</param>
        /// <returns>This Enumerable of Tasks.</returns>
		public static IEnumerable<Task> ContinueWhenAllEnded(this IEnumerable<Task> tasks, Action action)
		{
			return tasks.ContinueWhenAllEnded(t => action());
		}

        /// <summary>
        /// Starts the given Action when all Tasks in the Enumerable have ended.
        /// </summary>
        /// <param name="action">The action to start.</param>
        /// <returns>This Enumerable of Tasks.</returns>
		public static IEnumerable<Task> ContinueWhenAllEnded(this IEnumerable<Task> tasks, Action<IEnumerable<Task>> action)
		{
			var count = tasks.Count();

			if (count == 0)
				action(new Task[0]);

			var finishedTasks = new List<Task>();
			var syncRoot = new object();

			foreach (var task in tasks)
			{
				task.WhenEnded(t =>
				{
					lock (syncRoot)
					{
						finishedTasks.Add(task);
						if (finishedTasks.Count == count)
							action(finishedTasks);
					}
				});
			}

			return tasks;
		}
	}
}
