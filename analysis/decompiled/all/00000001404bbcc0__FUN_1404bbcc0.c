// Function: FUN_1404bbcc0
// Addr: 1404bbcc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbcc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint in_EAX;
  uint *puVar4;
  byte bVar6;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  bool bVar7;
  undefined1 *puVar5;
  
  while( true ) {
    bVar6 = (byte)((ulonglong)param_2 >> 8);
    *(char *)(unaff_RBP + -0x28) = *(char *)(unaff_RBP + -0x28) + bVar6;
    puVar5 = (undefined1 *)(((unaff_RDI & 0xffffffff) - 0x43) + (ulonglong)in_EAX * 4);
    *puVar5 = *puVar5;
    cVar3 = (char)(unaff_RDI & 0xffffffff);
    cRam00000000bcc85498 = cRam00000000bcc85498 + cVar3;
    bRam00000000bae87e00 = bRam00000000bae87e00 + bVar6;
    if (-1 < (char)bRam00000000bae87e00) {
      bRam00000000bae87e00 = bRam00000000bae87e00 + 0x7e;
      LOCK();
      UNLOCK();
      uRam00000000bae87e01 =
           (undefined2)
           (CONCAT22((short)(CONCAT13(uRam00000000bae87e03,
                                      CONCAT21(uRam00000000bae87e01,bRam00000000bae87e00)) >> 0x10),
                     CONCAT11((byte)uRam00000000bae87e01 | bRam00000000bae87e00,bRam00000000bae87e00
                             )) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar4 = (uint *)((ulonglong)CONCAT31((int3)(unaff_RDI >> 8),cVar3) | 0x50);
    *(char *)puVar4 = (char)*puVar4 + (char)puVar4;
    *puVar4 = *puVar4 & 0xbae87e00;
    bVar2 = (char)puVar4 + (char)*puVar4;
    *(byte *)(param_2 + 0x2eba1f801) = *(byte *)(param_2 + 0x2eba1f801) | bVar6;
    uVar1 = CONCAT22((short)(unaff_RDI >> 0x10),CONCAT11((char)(unaff_RDI >> 8) + '!',bVar2));
    bVar7 = CARRY1(bRam00000001004bde7a,bVar2);
    bRam00000001004bde7a = bRam00000001004bde7a + bVar2;
    cVar3 = (bVar2 - *(char *)(ulonglong)uVar1) - bVar7;
    puVar5 = (undefined1 *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cVar3);
    if (cVar3 == '\0') break;
    in_EAX = CONCAT22(uRam00000000bae87e01,CONCAT11(bRam00000000bae87e00,uRam00000000bae87dff));
    unaff_RDI = 0xc0883a00;
  }
  *param_4 = *param_4;
  *puVar5 = *puVar5;
  puVar5[0x50021c4] = puVar5[0x50021c4];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

