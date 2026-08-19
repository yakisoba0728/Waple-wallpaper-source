// Function: FUN_1404bbd00
// Addr: 1404bbd00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bbccf) overlaps instruction at (ram,0x0001404bbccd)
    */

void FUN_1404bbd00(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char *in_RAX;
  uint *puVar8;
  longlong unaff_RBX;
  undefined1 *puVar9;
  undefined8 *unaff_RBP;
  bool bVar11;
  undefined8 uStack_18;
  char *pcVar7;
  undefined8 *puVar10;
  
  pcVar7 = in_RAX + -0x77ffff41;
  *pcVar7 = *pcVar7 + (char)unaff_RBX;
  *in_RAX = *in_RAX;
  if (-1 < *pcVar7) {
    *in_RAX = *in_RAX + (char)in_RAX;
    LOCK();
    uVar3 = *(undefined4 *)param_1;
    *(int *)param_1 = (int)in_RAX;
    UNLOCK();
    pcVar7 = (char *)(unaff_RBX + 1 + (longlong)param_1 * 4);
    *pcVar7 = *pcVar7 + (char)((uint)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar10 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar5 = '\v';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar5 = cVar5 + -1;
    puVar9 = &stack0xfffffffffffffff0;
  } while ('\0' < cVar5);
  while( true ) {
    *(undefined1 **)(puVar9 + -0x60) = &stack0xfffffffffffffff0;
    bVar6 = (byte)((ulonglong)param_2 >> 8);
    *param_1 = *param_1 + bVar6;
    if (-1 < (char)*param_1) {
      *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
      *(undefined8 *)(puVar9 + -0x124) = 0xfffffffff41e00c2;
      LOCK();
      uVar3 = *(undefined4 *)param_1;
      param_1[0] = 0xbd;
      param_1[1] = 0;
      param_1[2] = 0x43;
      param_1[3] = 0x98;
      UNLOCK();
      bVar6 = (byte)uVar3;
      *param_1 = bVar6;
      *(uint *)param_1 =
           CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11((byte)((uint)uVar3 >> 8) | bVar6,bVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam00000000984300fd = CONCAT31(uRam00000000984300fd._1_3_,(char)uRam00000000984300fd + -3);
    uRam00000000984300fd = uRam00000000984300fd & (uint)param_1;
    bVar4 = (char)uRam00000000984300fd - 3;
    pbVar1 = (byte *)(param_2 + 1 + (longlong)param_1 * 4);
    *pbVar1 = *pbVar1 | bVar6;
    pcVar7 = (char *)CONCAT62(0x9843,CONCAT11(0x21,bVar4));
    bVar11 = CARRY1(bRam00000001004bde7a,bVar4);
    bRam00000001004bde7a = bRam00000001004bde7a + bVar4;
    cVar5 = (bVar4 - *pcVar7) - bVar11;
    pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar5);
    puVar8 = (uint *)(param_1 + -1);
    if (puVar8 != (uint *)0x0 && cVar5 == '\0') break;
    param_1 = (byte *)0xbae87e00;
    puVar2 = (undefined1 *)((ulonglong)*puVar8 * 4 + 0xc08839bd);
    *puVar2 = *puVar2;
    puVar9 = puVar9 + -0x11c;
  }
  *param_4 = *param_4 + (char)(puVar9 + -0x11c);
  *pcVar7 = *pcVar7 + cVar5;
  pcVar7[0x50021c4] = pcVar7[0x50021c4] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

