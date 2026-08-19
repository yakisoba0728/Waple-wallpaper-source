// Function: FUN_1404cf0b0
// Addr: 1404cf0b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf0b0(char *param_1,byte param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar6;
  undefined8 in_RAX;
  int *piVar5;
  
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  piVar5 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2 * '\x02',(char)in_RAX));
  iVar3 = ((int)piVar5 - *piVar5) - (uint)CARRY1(bVar2,bVar2);
  bVar2 = (byte)((uint)iVar3 >> 8);
  bVar6 = bVar2 + param_2;
  bVar2 = (char)iVar3 - CARRY1(bVar2,param_2);
  uVar4 = (CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11(bVar6 + bVar2,bVar2)) + -0x1e640000) -
          (uint)CARRY1(bVar6,bVar2);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  pcVar1 = (char *)(((ulonglong)uVar4 ^ 0x23) - 0x4bffc5c3);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

