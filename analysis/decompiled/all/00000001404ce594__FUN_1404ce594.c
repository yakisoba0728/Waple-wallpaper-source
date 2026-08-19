// Function: FUN_1404ce594
// Addr: 1404ce594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce594(uint param_1,undefined8 param_2)

{
  undefined7 uVar1;
  undefined1 uVar2;
  int iVar3;
  char *in_RAX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  char in_R11B;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,(char)param_2));
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar2 = in(0x4c);
  pcVar4 = (char *)CONCAT71(uVar1,uVar2);
  *pcVar4 = *pcVar4 + (char)(param_1 >> 8);
  param_1 = param_1 ^ (uint)pcVar6;
  cVar5 = (char)param_1 + in_R11B;
  uVar2 = in(0x4c);
  *pcVar6 = *pcVar6 + cVar5;
  pcVar6 = (char *)(ulonglong)
                   CONCAT22((short)(param_1 >> 0x10),CONCAT11((char)(param_1 >> 8) + cVar5,cVar5));
  iVar3 = (int)CONCAT71(uVar1,uVar2) + -0x3affd1fe;
  cVar5 = (char)iVar3 + *in_RAX;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),cVar5);
  *pcVar4 = *pcVar4 + cVar5;
  *pcVar6 = *pcVar6 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

