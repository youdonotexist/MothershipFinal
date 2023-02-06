using UnityEngine;
using System.Collections;

public static class MsSynthesizerPresets
{
	public static void SfxForType(string type, Synthesizer synthesizer) {
		if (type == "mothershiptalk") {
			MothershipBlip(synthesizer);
		}
		else if (type == "herotalk") {

		}
	}

	public static void MothershipBlip( Synthesizer synthesizer )
	{
		Reset( synthesizer );
		
		// WaveForm
		//if( RandomBool )
		//{
			synthesizer.WaveForm.SetAs( WaveForm.Type.Sawtooth );
		//}
		//else
		//{
			synthesizer.WaveForm.SetAs( WaveForm.Type.Square );
		//}
		
		// Frequency
		float frequency = 0.5f;//RandomMidiNoteNumber( 0.5f, 0.8f );
		synthesizer.Frequency.Variation = AnimationCurve.Linear( 0.0f, frequency, 1.0f, frequency );
		
		// Envelope
		synthesizer.Envelope.SustainTime = 0.01f;//Random.Range( 0.01f, 0.1f );
		synthesizer.Envelope.DecayTime = 0.0f;//Random.Range( 0.0f, 0.1f );
	}
}

