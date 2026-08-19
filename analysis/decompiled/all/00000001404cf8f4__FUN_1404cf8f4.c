// Function: FUN_1404cf8f4
// Addr: 1404cf8f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf92e) overlaps instruction at (ram,0x0001404cf92d)
    */

void FUN_1404cf8f4(char *param_1,undefined2 param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  char unaff_R12B;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar13;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong auStack_30 [5];
  undefined1 auStack_8 [8];
  char *pcVar5;
  
  cVar3 = (char)in_RAX + unaff_BH;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar5 = *pcVar5 + cVar3;
  puVar11 = auStack_8;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + (char)param_2,(char)param_1))
  ;
  if (!SBORROW1(*pcVar5,cVar3)) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    pbVar7 = pbVar8;
    uVar6 = (undefined7)((ulonglong)pcVar5 >> 8);
    cVar3 = (char)pcVar5 + unaff_BH;
    pcVar5 = (char *)CONCAT71(uVar6,cVar3);
    *pbVar7 = *pbVar7 + unaff_R12B;
    *pcVar5 = *pcVar5 + cVar3;
    pbVar8 = (byte *)(unaff_RSI + -0x2affc764);
    bVar2 = *pbVar8;
    bVar10 = (byte)((ushort)param_2 >> 8);
    bVar9 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar10;
    *(ulonglong *)(puVar11 + -8) =
         (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar9,bVar10) * 0x800 |
         (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
         (ulonglong)((char)*pbVar8 < '\0') * 0x80 | (ulonglong)(*pbVar8 == 0) * 0x40 |
         (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar8) & 1U) == 0) * 4 |
         (ulonglong)CARRY1(bVar2,bVar10) | (ulonglong)(in_ID & 1) * 0x200000 |
         (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
         (ulonglong)(in_AC & 1) * 0x40000;
    cVar3 = in(param_2);
    pcVar5 = (char *)CONCAT71(uVar6,cVar3);
    bVar9 = (byte)param_2;
    param_2 = CONCAT11(0x9c,bVar9);
    unaff_BH = unaff_BH << 1;
    bVar2 = *pbVar7;
    *pbVar7 = *pbVar7 + param_3;
    *pcVar5 = (*pcVar5 - (char)pbVar7) - CARRY1(bVar2,param_3);
    *pcVar5 = *pcVar5 + unaff_BL;
    bVar13 = SCARRY4(iRam00000001483d0233,unaff_EDI);
    iRam00000001483d0233 = iRam00000001483d0233 + unaff_EDI;
    pbVar8 = pbVar7 + -1;
    if (pbVar8 != (byte *)0x0 && iRam00000001483d0233 != 0) {
      param_2 = CONCAT11(0x9c,bVar9 + pcVar5[0x21]);
      *pcVar5 = *pcVar5 - CARRY1(bVar9,pcVar5[0x21]);
      pbVar1 = (byte *)(CONCAT44(unaff_0000003c,unaff_EDI) + -0x18);
      bVar13 = 99 < *pbVar1;
      *pbVar1 = *pbVar1 + 0x9c;
      break;
    }
    if (!bVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar12 = (undefined8 *)(puVar11 + -0x10);
    puVar11 = puVar11 + -0x10;
    *puVar12 = pcVar5;
    *(uint *)(pcVar5 + -0x77fffe8) = *(uint *)(pcVar5 + -0x77fffe8) & (uint)pcVar5;
    bVar13 = false;
    pcVar5 = (char *)CONCAT71(uVar6,cVar3);
  } while (cVar3 != '\0');
  uVar4 = (int)CONCAT71(uVar6,cVar3) + 0x16d86e00 + (uint)bVar13;
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[(longlong)pbVar8 * 8 + 0x17] = pcVar5[(longlong)pbVar8 * 8 + 0x17] + unaff_BL;
  pbVar8 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x48);
  bVar2 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)param_2;
  cVar3 = (char)uVar4;
  *pcVar5 = (*pcVar5 - cVar3) - CARRY1(bVar2,(byte)param_2);
  pbVar7[-0x69] = pbVar7[-0x69] + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

