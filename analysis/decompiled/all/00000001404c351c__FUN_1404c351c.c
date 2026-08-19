// Function: FUN_1404c351c
// Addr: 1404c351c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c351c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RBX;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  undefined8 in_MM1;
  
  *unaff_RBX = *unaff_RBX & (uint)param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  pmulhuw(in_MM1,uRam000000014eb03d2b);
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_2 * 2);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

