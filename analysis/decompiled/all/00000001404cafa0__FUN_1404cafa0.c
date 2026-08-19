// Function: FUN_1404cafa0
// Addr: 1404cafa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cafa0(undefined8 param_1)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  byte *pbVar2;
  
  pbVar2 = (byte *)(ulonglong)(uint)(unaff_ESI + *(int *)CONCAT71(in_register_00000001,in_AL));
  *pbVar2 = *pbVar2 >> 1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_1 >> 8);
  bVar1 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
       (*(int *)CONCAT44(unaff_0000001c,unaff_EBX) - unaff_EBX) - (uint)CARRY1(bVar1,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

