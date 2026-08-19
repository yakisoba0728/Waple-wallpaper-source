// Function: FUN_1404ac6dc
// Addr: 1404ac6dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac6dc(char *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  char unaff_BH;
  char unaff_SPL;
  
  iVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX)) + 0x103da200
  ;
  cVar1 = (char)iVar2 + unaff_BH;
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar1;
  *(char *)(param_2 + -0x7ffefc3) = *(char *)(param_2 + -0x7ffefc3) + (char)((uint)iVar2 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  uVar3 = uVar3 + 0x34050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

