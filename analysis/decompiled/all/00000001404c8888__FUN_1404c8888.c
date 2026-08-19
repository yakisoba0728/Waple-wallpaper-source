// Function: FUN_1404c8888
// Addr: 1404c8888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8888(undefined1 *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar9;
  byte *in_RAX;
  longlong lVar10;
  char *pcVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  bool in_SF;
  uint *puVar8;
  
  bVar5 = (byte)in_RAX;
  if (!in_SF) {
    *param_1 = *param_1;
    *in_RAX = *in_RAX + bVar5;
    in_RAX[-0x6a] = in_RAX[-0x6a] + (char)((ulonglong)in_RAX >> 8);
    *in_RAX = *in_RAX ^ bVar5;
    *(uint *)(unaff_RSI + -0x2f87ffd0) = ~*(uint *)(unaff_RSI + -0x2f87ffd0);
    *param_1 = *param_1;
    *(byte *)param_2 = (char)*param_2 + bVar5;
    *in_RAX = *in_RAX + bVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pbVar9 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 + in_CF);
  if (!SCARRY1(bVar5,in_CF)) {
    *pbVar9 = *pbVar9 ^ bVar5 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (uint)pbVar9 | 0xc40d0004;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)uVar6;
  iVar7 = uVar6 + 0x4a000964;
  bVar5 = (char)iVar7 + (char)((uint)iVar7 >> 8);
  uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),bVar5);
  puVar8 = (uint *)(ulonglong)uVar6;
  *(byte *)puVar8 = (byte)*puVar8 + (char)param_2;
  LOCK();
  puVar2 = (undefined4 *)((longlong)puVar8 * 2 + 0x21);
  uVar3 = *puVar2;
  *puVar2 = (int)param_1;
  lVar10 = CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar3);
  UNLOCK();
  *(byte *)puVar8 = (byte)*puVar8 + bVar5;
  *(char *)((longlong)param_2 + 0x1b) = *(char *)((longlong)param_2 + 0x1b) + (char)uVar3;
  *puVar8 = *puVar8 ^ uVar6;
  pcVar11 = (char *)(lVar10 + -1);
  if (pcVar11 == (char *)0x0 || *puVar8 == 0) {
    *puVar8 = *puVar8 ^ uVar6;
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x21004c);
    *pcVar1 = *pcVar1 + bVar5;
    uVar4 = *puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar5;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL +
         CARRY1((byte)uVar4,bVar5);
    *puVar8 = *puVar8 ^ uVar6;
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + (longlong)puVar8 * 4);
    *pcVar1 = *pcVar1 + bVar5;
    *pcVar11 = *pcVar11 + param_3;
    *param_2 = *param_2 | uVar6;
    *pcVar11 = *pcVar11 + (char)pcVar11;
  }
  *(uint *)(lVar10 + 0xd) = *(uint *)(lVar10 + 0xd) & unaff_EDI;
  *(char *)(lVar10 + -0x2d) = *(char *)(lVar10 + -0x2d) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

