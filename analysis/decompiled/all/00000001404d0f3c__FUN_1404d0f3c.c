// Function: FUN_1404d0f3c
// Addr: 1404d0f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0f3c(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  char *in_RAX;
  longlong lVar6;
  char unaff_BL;
  char unaff_R12B;
  byte *pbVar5;
  
  bVar3 = (byte)in_RAX;
  cVar7 = (char)((ulonglong)in_RAX >> 8) + *in_RAX;
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar7,bVar3));
  *param_1 = *param_1 + cVar7;
  *param_2 = *param_2 | bVar3;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)param_1;
  *pbVar5 = *pbVar5 + bVar3 + CARRY1(bVar2,(byte)param_1);
  lVar6 = CONCAT71((int7)((ulonglong)pbVar5 >> 8),bVar3 + (char)((ulonglong)param_2 >> 8));
  pcVar1 = (char *)(lVar6 + 0xe);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_4 = *param_4 + unaff_R12B;
  uVar4 = (int)lVar6 + 0xd4050002;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

