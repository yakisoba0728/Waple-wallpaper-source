// Function: FUN_1404b3afc
// Addr: 1404b3afc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3afc(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  byte *unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 10);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_1 >> 8);
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) - CARRY1(bVar2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

