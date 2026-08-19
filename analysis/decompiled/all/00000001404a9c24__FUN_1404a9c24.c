// Function: FUN_1404a9c24
// Addr: 1404a9c24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9c24(longlong param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar6;
  undefined4 in_EAX;
  uint uVar7;
  byte *pbVar8;
  longlong unaff_RBX;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  char *pcVar5;
  
  *(char *)(param_1 + 0xd26c000) = *(char *)(param_1 + 0xd26c000) + (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)((uint)in_EAX >> 8);
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + bVar6,(char)param_1));
  bVar6 = bVar6 | 0x94;
  bVar2 = *pbVar8;
  bVar3 = (byte)in_EAX;
  *pbVar8 = *pbVar8 + bVar3;
  cVar4 = bVar3 + *unaff_RSI + CARRY1(bVar2,bVar3);
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),cVar4) | 0x4a9a9400;
  pcVar5 = (char *)(ulonglong)uVar7;
  *param_2 = *param_2 + (char)param_2;
  if (*param_2 != '\0') {
    *param_2 = *param_2 + (char)param_2;
    LocalDescriptorTableRegister(*(undefined2 *)(param_2 + in_FS_OFFSET));
    uRam00000001744f9c4c = uRam00000001744f9c4c & uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + bVar6;
  uVar7 = (int)pbVar8 - iRam000000014d768353;
  pcVar1 = (char *)(unaff_RBX * 5 + 0x4a);
  *pcVar1 = *pcVar1 + bVar6;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + bVar6;
  *pcVar5 = *pcVar5 + cVar4;
  *pcVar5 = *pcVar5 + bVar6;
  uVar7 = uVar7 - iRam000000014d768363;
  pcVar5 = (char *)(unaff_RBX * 5 + 0x4a);
  *pcVar5 = *pcVar5 + bVar6;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

