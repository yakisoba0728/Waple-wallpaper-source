// Function: FUN_1404d5508
// Addr: 1404d5508
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d552e) overlaps instruction at (ram,0x0001404d552d)
    */

void FUN_1404d5508(char *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined7 uVar9;
  undefined8 uVar8;
  char cVar10;
  char *unaff_RBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  byte unaff_R12B;
  char *pcVar7;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (char)in_RAX + 0x54;
  pcVar7 = (char *)CONCAT71(uVar9,bVar4);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar7 = *pcVar7 + bVar4;
  pbVar1 = (byte *)(pcVar7 + -0x2fffc089);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  if (!CARRY1(bVar2,bVar4) && *pbVar1 != 0) {
    cVar5 = *pcVar7;
    (&stack0x00000000)[(longlong)param_1] =
         (&stack0x00000000)[(longlong)param_1] + cVar10 +
         (0xeffff98b < (uint)CONCAT71(uVar9,bVar4 + cVar5));
    (&stack0x00000000)[(longlong)unaff_RSI] =
         (&stack0x00000000)[(longlong)unaff_RSI] + (bVar4 + cVar5 + 0x74 | 100);
    *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar10,bVar4));
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + (int)uVar8 + (uint)CARRY1(bVar2,unaff_R12B);
  *param_1 = *param_1 + (char)param_2;
  cVar5 = in(8);
  *param_2 = *param_2 + (char)param_1;
  if (*param_2 != '\0') {
    cRam00000000d04d5b61 = cRam00000000d04d5b61 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),cVar5) ^ 0x35e9bf00;
  *unaff_RBX = *unaff_RBX + cVar10;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar5;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar5;
  uVar3 = (undefined3)(uVar6 >> 8);
  cVar5 = in(8);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,cVar5);
  *pcVar7 = *pcVar7 + cVar5;
  if (*pcVar7 != '\0') {
    *pcVar7 = *pcVar7 + cVar5;
    pcVar7 = (char *)(((ulonglong)CONCAT31(uVar3,cVar5) ^ 6) - 0x40ffca17);
    *pcVar7 = *pcVar7 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBX = *unaff_RBX + cVar10;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

