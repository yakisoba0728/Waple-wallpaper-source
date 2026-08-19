// Function: FUN_1404b4f0c
// Addr: 1404b4f0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4f0c(int *param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  byte *pbVar5;
  
  *param_1 = *param_1 + unaff_EBX;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(int *)((longlong)in_RAX + 2) = *(int *)((longlong)in_RAX + 2) - unaff_EDI;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  uVar4 = (uint)in_RAX + 0x3600470;
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar2 = *pbVar5;
  bVar3 = (byte)uVar4;
  *pbVar5 = *pbVar5 + bVar3;
  *param_1 = *param_1 + unaff_EBX;
  *pbVar5 = *pbVar5 | bVar3;
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) + bVar2,(char)param_2)) + 0x15)
  ;
  *piVar1 = *piVar1 - unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

