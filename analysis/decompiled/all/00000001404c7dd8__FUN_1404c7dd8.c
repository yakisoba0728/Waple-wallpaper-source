// Function: FUN_1404c7dd8
// Addr: 1404c7dd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c7e5f) */
/* WARNING: Removing unreachable block (ram,0x0001404c7e61) */

void FUN_1404c7dd8(undefined8 param_1,byte *param_2,char param_3)

{
  char *pcVar1;
  uint7 uVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  char cVar6;
  byte bVar7;
  undefined6 uVar8;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESP;
  longlong unaff_RSI;
  char unaff_R12B;
  byte *pbVar5;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  uVar4 = in_EAX + 0x400009e4;
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  if ((POPCOUNT(uVar4 & 0xff) & 1U) == 0) {
    *(char *)(unaff_RSI + -0xfffcf85) = *(char *)(unaff_RSI + -0xfffcf85) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)param_1 + bVar3;
  if (cVar6 == '\0') {
    pbVar5[0xf] = pbVar5[0xf] | bVar7;
    pbVar5[0x650030f5] = pbVar5[0x650030f5] + bVar3;
    *pbVar5 = *pbVar5 ^ bVar3;
    uVar2 = (uint7)((ulonglong)param_1 >> 8);
    *(char *)((ulonglong)uVar2 << 8) = *(char *)((ulonglong)uVar2 << 8) + unaff_R12B;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar5[0x650030f5] = pbVar5[0x650030f5] + bVar3;
    *pbVar5 = *pbVar5 ^ bVar3;
    *(char *)((ulonglong)uVar2 << 8) = *(char *)((ulonglong)uVar2 << 8) + param_3;
    *param_2 = *param_2 | bVar3;
    *pbVar5 = *pbVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + 0x20002234);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_ESP;
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

