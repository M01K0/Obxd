This is a fork of [github.com/reales/OB-Xd](https://github.com/reales/OB-Xd) which originated from [github.com/2DaT/Obxd](https://github.com/2DaT/Obxd).

The fork is currently motivated by "getting a good EWI USB experience on MacOS". The synth has got some real potential in this area (Michael Brecker played Oberheim synths on his EWI), but there are some annoying issues, mostly that it does not save learnt midi mappings as part of the plugin state or similar. I have added some hard coded patches to make this work with my setup. I may fix this in a more general way later ... maybe.

I have read that this could possibly work better on Windows (VST version where you should be able to save banks (fxb) with these settings)), but this patched version has some hard-coded settings that works for me:

* Cutoff is mapped to CC2 (breath)
* Portamento is mapped to CC5 (I have that on "thumb down" on my EWI)

A demo: https://www.youtube.com/watch?v=SOC71Dqwcmo

Original `README` below:

---


# discoDSP OB-Xd
Download binaries at https://www.discodsp.com/obxd/

# About

While not copying originals, some of the features were taken to a better point. Continuous blendable multimode filter (HP-Notch(BP)-HP in 12 dB mode and 4-1 pole in 24 dB mode). 32 and 64 bit versions included.

Thanks to 2Dat for the original OB-Xd and Soshi Studio for giving the rights to continue this wonderful product.
Also thanks to all KVR members for making the amazing skins!

OB-Xd is based on the Oberheim OB-X. It attempts to recreate its sound and behavior, but as the original was very limited in some important ways a number of things were added or altered to the original design.

The OB-Xd was designed to sound as good and as rich as the original. It implements micro random detuning which is a big part of that sound. However, it was not designed as a self-contained completely independent soft-synth. It needs to be contained within a VST framework where things like transposition, automation, layering, arpeggiation, etc., are available.

Also, like many synths of the OB-X's generation, the OB-Xd has no internal effects so its sounds and textures can be greatly enhanced by the use of additional processing like chorus, reverb, delay, etc.
