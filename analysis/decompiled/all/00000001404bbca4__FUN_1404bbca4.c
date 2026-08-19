// Function: FUN_1404bbca4
// Addr: 1404bbca4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbca4(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  uint *in_RAX;
  byte bVar9;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  bool bVar10;
  char *pcVar8;
  
  while( true ) {
    *in_RAX = *in_RAX & (uint)param_1;
    bVar5 = (char)in_RAX + (char)*in_RAX;
    pbVar1 = (byte *)(param_2 + 1 + param_1 * 4);
    bVar9 = (byte)((ulonglong)param_2 >> 8);
    *pbVar1 = *pbVar1 | bVar9;
    pcVar8 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((char)((ulonglong)in_RAX >> 8) + '!',bVar5));
    bVar10 = CARRY1(bRam00000001004bde7a,bVar5);
    bRam00000001004bde7a = bRam00000001004bde7a + bVar5;
    cVar6 = (bVar5 - *pcVar8) - bVar10;
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar6);
    if ((uint *)(param_1 + -1) != (uint *)0x0 && cVar6 == '\0') {
      *param_4 = *param_4;
      *pcVar8 = *pcVar8 + cVar6;
      pcVar8[0x50021c4] = pcVar8[0x50021c4] + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = *(uint *)(param_1 + -1);
    param_1 = 0xbae87e00;
    *(char *)(unaff_RBP + -0x28) = *(char *)(unaff_RBP + -0x28) + bVar9;
    puVar2 = (undefined1 *)(((unaff_RDI & 0xffffffff) - 0x43) + (ulonglong)uVar3 * 4);
    *puVar2 = *puVar2;
    uVar4 = uRam00000000bae87e00;
    cVar7 = (char)(unaff_RDI & 0xffffffff);
    cRam00000000bcc85498 = cRam00000000bcc85498 + cVar7;
    cVar6 = (char)uRam00000000bae87e00 + bVar9;
    uRam00000000bae87e00 = CONCAT31(uRam00000000bae87e00._1_3_,cVar6);
    if (-1 < cVar6) break;
    in_RAX = (uint *)((ulonglong)CONCAT31((int3)(unaff_RDI >> 8),cVar7) | 0x50);
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    unaff_RDI = 0xc0883a00;
  }
  LOCK();
  UNLOCK();
  uRam00000000bae87e00 =
       CONCAT22((short)((uint)uVar4 >> 0x10),
                CONCAT11((byte)((uint)uVar4 >> 8) | cVar6 + 0x7eU,cVar6 + 0x7eU));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

