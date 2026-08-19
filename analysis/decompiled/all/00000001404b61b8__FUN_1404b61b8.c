// Function: FUN_1404b61b8
// Addr: 1404b61b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b61b8(void)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int unaff_ESP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 10);
  *piVar1 = *piVar1 + unaff_ESP;
  pbVar2 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x1c);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       (*(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - (uint)CARRY1(bVar3,in_AH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

