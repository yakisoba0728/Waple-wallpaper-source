// Function: FUN_1404b0990
// Addr: 1404b0990
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0990(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  char unaff_BH;
  char unaff_SPL;
  uint unaff_EDI;
  
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(10,(char)in_RAX));
  *param_1 = *param_1 + unaff_SPL;
  *pcVar4 = *pcVar4 + (char)in_RAX;
  pbVar1 = (byte *)(pcVar4 + -0x79);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  uVar3 = (int)pcVar4 + 0x15876100 + (uint)CARRY1(bVar2,(byte)param_2);
  param_1[param_2 + 0xb01004a] = param_1[param_2 + 0xb01004a] + (char)((ulonglong)param_2 >> 8);
  *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3;
  uVar3 = uVar3 | (uint)param_2;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & unaff_EDI;
  *(char *)(param_2 + -0x3c) = *(char *)(param_2 + -0x3c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

