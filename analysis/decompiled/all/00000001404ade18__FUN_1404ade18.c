// Function: FUN_1404ade18
// Addr: 1404ade18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ade18(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  
  uVar4 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar3 = (undefined2)((ulonglong)param_1 >> 0x10);
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & (uint)param_1;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + param_1 * 2);
  *pbVar1 = *pbVar1 | (byte)param_2;
  *(char *)(param_2 + -0x80) = *(char *)(param_2 + -0x80) + unaff_BL;
  cVar2 = (char)((ulonglong)param_1 >> 8) - unaff_BL;
  *(char *)CONCAT44(uVar4,CONCAT22(uVar3,CONCAT11(cVar2,(char)param_1))) =
       *(char *)CONCAT44(uVar4,CONCAT22(uVar3,CONCAT11(cVar2,(char)param_1))) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

