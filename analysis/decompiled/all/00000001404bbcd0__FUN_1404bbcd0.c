// Function: FUN_1404bbcd0
// Addr: 1404bbcd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bbcd3) overlaps instruction at (ram,0x0001404bbcd0)
    */

void FUN_1404bbcd0(byte *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  byte bVar8;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  bool bVar9;
  undefined1 in_SF;
  char *pcVar7;
  
  while( true ) {
    bRam883a00bf984300bd = bRam883a00bf984300bd << 1 | bRam883a00bf984300bd >> 7;
    if (!(bool)in_SF) {
      *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
      LOCK();
      uVar3 = *(undefined4 *)param_1;
      param_1[0] = 0xbd;
      param_1[1] = 0;
      param_1[2] = 0x43;
      param_1[3] = 0x98;
      UNLOCK();
      bVar5 = (byte)uVar3;
      *param_1 = bVar5;
      *(uint *)param_1 =
           CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11((byte)((uint)uVar3 >> 8) | bVar5,bVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam883a00bf984300fd = CONCAT31(uRam883a00bf984300fd._1_3_,(char)uRam883a00bf984300fd + -3);
    uRam883a00bf984300fd = uRam883a00bf984300fd & (uint)param_1;
    bVar5 = (char)uRam883a00bf984300fd - 3;
    pbVar1 = (byte *)(param_2 + 1 + (longlong)param_1 * 4);
    bVar8 = (byte)((ulonglong)param_2 >> 8);
    *pbVar1 = *pbVar1 | bVar8;
    pcVar7 = (char *)CONCAT62(0x883a00bf9843,CONCAT11(0x21,bVar5));
    bVar9 = CARRY1(bRam00000001004bde7a,bVar5);
    bRam00000001004bde7a = bRam00000001004bde7a + bVar5;
    cVar6 = (bVar5 - *pcVar7) - bVar9;
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar6);
    if ((uint *)(param_1 + -1) != (uint *)0x0 && cVar6 == '\0') break;
    uVar4 = *(uint *)(param_1 + -1);
    param_1 = (byte *)0xbae87e00;
    *(char *)(unaff_RBP + -0x28) = *(char *)(unaff_RBP + -0x28) + bVar8;
    puVar2 = (undefined1 *)(((unaff_RDI & 0xffffffff) - 0x43) + (ulonglong)uVar4 * 4);
    *puVar2 = *puVar2;
    cRam00000000bcc85498 = cRam00000000bcc85498 + (char)(unaff_RDI & 0xffffffff);
    unaff_RDI = 0xc0883a00;
    cRam00000000bae87e00 = cRam00000000bae87e00 + bVar8;
    in_SF = cRam00000000bae87e00 < '\0';
  }
  *param_4 = *param_4;
  *pcVar7 = *pcVar7 + cVar6;
  pcVar7[0x50021c4] = pcVar7[0x50021c4] + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

