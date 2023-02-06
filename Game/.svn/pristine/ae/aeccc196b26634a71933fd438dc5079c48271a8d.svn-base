using UnityEngine;
using System.Collections;

public class PortState
{
	public int portIndex;
	public bool needUpdate;
	public MinionTypeDetails[] details;
	public PortType portType;
	public int selectedType;
	public float scrapCount;

	//Port minion types
	public enum MinionTypes { 
		NORMAL_MINION,
		SPEED_MINION,
		SPLIT_MINION,
		SEEKER_MINION,
		TWOHIT_MINION,
		COUNT
	}

	public enum PortType {
		PORT,
		MOTHERSHIP
	}
	
	public enum MinionUpgradeType {
		LEVEL_MINION,
		SINGLE_USE,
		SINGLE_LEVEL
	}
	
	public struct MinionTypeLevelDetail {
		public string title;
		public string description;

		public float damage;
		public float speed;
		public float cost;
		public float life;
		public int index;
	}
	
	public struct MinionTypeDetails {
		public int index;
		public string title;
		public string description;
		
		public int state;
		public MinionTypeLevelDetail[] levels;
		public MinionUpgradeType upgradeType;
	}
	
	public static PortState NewPortState (int port, bool update, MinionTypeDetails[] dets, int type) {
		PortState ps = new PortState();
		ps.portIndex = port;
		ps.needUpdate = update;
		ps.details = dets;
		ps.selectedType = type;
		return ps;
	}

	public PortState.MinionTypeDetails GetCurrentTypeDetails() {
		int typeIndex = selectedType < details.Length ? selectedType : 0;
		return details[typeIndex];
	}

	public PortState.MinionTypeDetails GetTypeDetailsByIndex(int index) {
		//int typeIndex = index < details.Length ? index : 0;
		return details[index];
	}

	public PortState.MinionTypeLevelDetail GetCurrentLevelDetails() {
		int typeIndex = selectedType < details.Length ? selectedType : 0;
		return details[typeIndex].levels[details[typeIndex].state];
	}
}

