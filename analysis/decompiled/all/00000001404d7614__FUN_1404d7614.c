// Function: FUN_1404d7614
// Addr: 1404d7614
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7614(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  uint unaff_ESI;
  
  uVar4 = *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  puVar1 = (uint *)((ulonglong)(unaff_ESI | uVar4) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *puVar1 = *puVar1 & unaff_ESP;
  pbVar2 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + param_2 * 8);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL + CARRY1(bVar3,in_AH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

