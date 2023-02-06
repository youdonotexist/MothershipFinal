using UnityEngine;
using System.Collections;

public class DebrisParticleEffect : MonoBehaviour
{
	public Color debrisColor;
	public float debrisRadius;

	ParticleSystem _system;
	Color32[] colors;
	bool fixColors = true;

	public void DoIt(float speed, Color32[] inColors) {
		colors = inColors;

		Vector3 pos = transform.position;
		pos.z = LayerManager._5;
		transform.position = pos;

		_system = GetComponent<ParticleSystem>();
		_system.startSpeed = speed;
		_system.simulationSpace = ParticleSystemSimulationSpace.Local;
		_system.Play();

	}

	void LateUpdate() {
		if (fixColors && _system.isPlaying && colors.Length > 0) {
			ParticleSystem.Particle[] parts = new ParticleSystem.Particle[_system.maxParticles];
			_system.GetParticles(parts);
			for (int i = 0; i < parts.Length; i++) {
				parts[i].color = colors[Random.Range(0, colors.Length-1)];
			}
			_system.SetParticles(parts, parts.Length);
			fixColors = false;
		}

		if (!_system.IsAlive()) {
			Destroy(gameObject);
		}
	}
}

