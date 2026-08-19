// Function: FUN_1404bbc2c
// Addr: 1404bbc2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbc2c(char *param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  byte *in_RAX;
  uint *puVar6;
  ulonglong uVar8;
  undefined6 uVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  uint *unaff_RDI;
  bool bVar14;
  char *pcVar7;
  undefined7 uVar13;
  
  *in_RAX = *in_RAX & (byte)in_RAX;
  func_0x00011889bc57();
  puVar6 = (uint *)0x20000000;
  *param_1 = *param_1 + (char)param_2;
  *(undefined1 *)unaff_RDI = 0;
  cVar5 = (char)param_1;
  cRam0000000020000000 = cRam0000000020000000 + cVar5;
  if (-1 < cRam0000000020000000) {
    cVar12 = (char)((ulonglong)unaff_RBX >> 8);
    uVar13 = (undefined7)((ulonglong)unaff_RBX >> 8);
    cVar11 = (char)unaff_RBX + cVar12;
    *unaff_RSI = *unaff_RSI;
    uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
    pcVar7 = (char *)CONCAT62(uVar9,CONCAT11(0x21,cVar5));
    puVar1 = (undefined1 *)(CONCAT71(uVar13,cVar11) + 0x4b + (longlong)unaff_RDI * 4);
    *puVar1 = *puVar1;
    *pcVar7 = *pcVar7 + '!';
    unaff_RBX = CONCAT71(uVar13,cVar11 + cVar12);
    *unaff_RSI = *unaff_RSI;
    param_1 = (char *)CONCAT62(uVar9,CONCAT11(0x21,cVar5));
    puVar1 = (undefined1 *)(unaff_RBX + 0x4b + (longlong)unaff_RDI * 4);
    *puVar1 = *puVar1;
    *param_1 = *param_1 + '!';
    *(char *)((longlong)unaff_RDI + -0x4ffde52) =
         *(char *)((longlong)unaff_RDI + -0x4ffde52) + cVar12;
    puVar6 = (uint *)0x20002100;
  }
  pcVar7 = (char *)(unaff_RBX + (longlong)unaff_RDI * 4);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  *pcVar7 = *pcVar7 + cVar5;
  *param_4 = *param_4 + -8;
  *param_2 = *param_2;
  *(char *)puVar6 = (char)*puVar6;
  *puVar6 = *puVar6 & (uint)puVar6;
  uVar8 = CONCAT62((int6)((ulonglong)puVar6 >> 0x10),0x2100);
  pcVar7 = (char *)(unaff_RBX + (longlong)unaff_RDI * 4);
  *pcVar7 = *pcVar7 + cVar5;
  *param_4 = *param_4;
  *unaff_RDI = *unaff_RDI ^ (uint)uVar8;
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + bVar10;
  *unaff_RSI = *unaff_RSI + (char)unaff_RBX;
  *(int *)(param_1 + uVar8 + 0x300de00f) = *(int *)(param_1 + uVar8 + 0x300de00f) + (int)param_1;
  do {
    puVar6 = (uint *)(uVar8 | 0x50);
    *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
    *puVar6 = *puVar6 & (uint)param_1;
    bVar4 = (char)puVar6 + (char)*puVar6;
    param_2[(longlong)param_1 * 4 + 1] = param_2[(longlong)param_1 * 4 + 1] | bVar10;
    pcVar7 = (char *)CONCAT62((int6)(uVar8 >> 0x10),CONCAT11((char)(uVar8 >> 8) + '!',bVar4));
    bVar14 = CARRY1(bRam00000001004bde7a,bVar4);
    bRam00000001004bde7a = bRam00000001004bde7a + bVar4;
    cVar5 = (bVar4 - *pcVar7) - bVar14;
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar5);
    if ((uint *)(param_1 + -1) != (uint *)0x0 && cVar5 == '\0') {
      *param_4 = *param_4 + -0x10;
      *pcVar7 = *pcVar7 + cVar5;
      pcVar7[0x50021c4] = pcVar7[0x50021c4] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = *(uint *)(param_1 + -1);
    uVar8 = (ulonglong)unaff_RDI & 0xffffffff;
    param_1 = (char *)0xbae87e00;
    *(char *)(unaff_RBP + -0x28) = *(char *)(unaff_RBP + -0x28) + bVar10;
    puVar1 = (undefined1 *)((uVar8 - 0x43) + (ulonglong)uVar2 * 4);
    *puVar1 = *puVar1;
    uVar3 = uRam00000000bae87e00;
    cRam00000000bcc85498 = cRam00000000bcc85498 + (char)uVar8;
    unaff_RDI = (uint *)0xc0883a00;
    cVar5 = (char)uRam00000000bae87e00 + bVar10;
    uRam00000000bae87e00 = CONCAT31(uRam00000000bae87e00._1_3_,cVar5);
  } while (cVar5 < '\0');
  LOCK();
  UNLOCK();
  uRam00000000bae87e00 =
       CONCAT22((short)((uint)uVar3 >> 0x10),
                CONCAT11((byte)((uint)uVar3 >> 8) | cVar5 + 0x7eU,cVar5 + 0x7eU));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

