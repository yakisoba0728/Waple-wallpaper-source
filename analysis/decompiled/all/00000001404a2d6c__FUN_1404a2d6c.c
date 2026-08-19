// Function: FUN_1404a2d6c
// Addr: 1404a2d6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2dcc) overlaps instruction at (ram,0x0001404a2dca)
    */

void FUN_1404a2d6c(char *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  undefined7 uVar9;
  char *pcVar7;
  byte *pbVar8;
  byte bVar10;
  byte bVar11;
  byte unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  uint uVar5;
  uint *puVar6;
  
  bVar11 = (byte)(param_2 >> 8);
  bVar10 = (byte)param_2;
  *in_RAX = *in_RAX & param_2;
  cVar3 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  bVar2 = (byte)in_RAX;
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar3,bVar2));
  *(byte *)puVar6 = (byte)*puVar6 + (char)param_1;
  pbVar8 = (byte *)((longlong)puVar6 + -0x27fffa8e);
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar10;
  if (!CARRY1(bVar1,bVar10)) {
    *puVar6 = *puVar6 & (uint)puVar6;
  }
  (&stack0x00210032)[unaff_RBP] = (&stack0x00210032)[unaff_RBP] + bVar2;
  uVar5 = *puVar6;
  *(byte *)puVar6 = (byte)*puVar6 + bVar2;
  if (CARRY1((byte)uVar5,bVar2)) {
    *param_1 = *param_1 + cVar3;
    *(char *)((longlong)puVar6 * 2) = *(char *)((longlong)puVar6 * 2) + bVar2;
  }
  else {
    uVar9 = (undefined7)((ulonglong)puVar6 >> 8);
    cVar3 = bVar2 + unaff_BL;
    puVar6 = (uint *)CONCAT71(uVar9,cVar3);
    if (!CARRY1(bVar2,unaff_BL)) {
      *puVar6 = *puVar6 & (uint)puVar6;
    }
    (&stack0x00210032)[unaff_RBP] = (&stack0x00210032)[unaff_RBP] + cVar3;
    puVar6 = (uint *)CONCAT71(uVar9,cVar3);
  }
  cVar3 = (char)puVar6;
  pcVar7 = (char *)CONCAT62((int6)((ulonglong)puVar6 >> 0x10),
                            CONCAT11((char)((ulonglong)puVar6 >> 8) * '\x02',cVar3));
  *pcVar7 = *pcVar7 + cVar3;
  pbVar8 = (byte *)(pcVar7 + -0x27fffa8e);
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar10;
  if (CARRY1(bVar1,bVar10)) {
    (&stack0x0521001a)[unaff_RBP] = (&stack0x0521001a)[unaff_RBP] + cVar3;
    uVar5 = (uint)CONCAT71((int7)((ulonglong)pcVar7 >> 8),cVar3 + *pcVar7);
    uVar4 = uVar5 + 0x30000664;
    if (uVar5 < 0xcffff99c && uVar4 != 0) {
      *(char *)(unaff_RBP + 0x76) = *(char *)(unaff_RBP + 0x76) + (char)uVar4;
      uVar4 = uVar5 + 0x79ede664;
      *param_1 = *param_1 + (char)(uVar4 >> 8);
      do {
        pbVar8 = (byte *)(ulonglong)uVar4;
        cVar3 = (char)uVar4;
        *pbVar8 = *pbVar8 + cVar3;
        bVar1 = *pbVar8;
        *pbVar8 = *pbVar8 + bVar11;
        if (!CARRY1(bVar1,bVar11) && *pbVar8 != 0) {
          *(char *)(unaff_RBP + 0x76) = *(char *)(unaff_RBP + 0x76) + cVar3;
          uVar4 = uVar4 + 0x49ede000;
          *param_1 = *param_1 + (char)uVar4;
code_r0x0001404a2dd1:
          *unaff_RSI = *unaff_RSI + ((byte)uVar4 | 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1 = param_1 + -1;
        if (param_1 == (char *)0x0 || *pbVar8 == 0) {
          *param_4 = *param_4 + cVar3;
          goto code_r0x0001404a2dd1;
        }
        uVar4 = in((short)param_2);
code_r0x0001404a2dbe:
        *param_4 = *param_4 + (char)&stack0xffffffffffffffd0;
      } while( true );
    }
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || uVar4 == 0) goto code_r0x0001404a2dbe;
    *param_1 = *param_1 + (char)(uVar4 >> 8);
  }
  else {
    uRam00000001a44f2db4 = uRam00000001a44f2db4 & (uint)pcVar7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

