*PhotoDiode

.subckt PhotoDiode  VDD N1_R1C1 
	I1_R1C1  VDD   N1_R1C1   DC  Ipd_1
	d1 N1_R1C1 vdd dwell 1
	.model dwell d cj0=1e-14 is=1e-12 m=0.5 bv=40
	Cd1 N1_R1C1 VDD 30f
.ends PhotoDiode