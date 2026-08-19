// Function: FUN_1404a2b4c
// Addr: 1404a2b4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2b4c(byte *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar9;
  uint *in_RAX;
  uint *puVar8;
  char cVar10;
  char cVar11;
  undefined7 uVar13;
  byte bVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  char *pcVar6;
  int *piVar7;
  longlong lVar12;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 5);
  *pbVar1 = *pbVar1 & bVar14;
  cVar11 = unaff_BH * '\x02';
  uVar2 = uVar4 + 0x4a2a4800;
  pcVar6 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  cVar10 = (char)param_1;
  *pcVar6 = *pcVar6 + cVar10;
  *pcVar6 = *pcVar6 + (char)uVar2;
  if (*pcVar6 < '\0') {
    iVar5 = uVar4 - 0x6da89c;
    cVar9 = (char)((uint)iVar5 >> 8) + (char)iVar5;
    uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar9,(char)iVar5));
    uVar13 = (undefined7)((ulonglong)param_1 >> 8);
    cVar10 = cVar10 - (char)*param_2;
    lVar12 = CONCAT71(uVar13,cVar10);
    *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & uVar4;
    pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(cVar11,unaff_BL)) + lVar12);
    *pcVar6 = *pcVar6 + bVar15;
    pcVar6 = (char *)((longlong)param_2 + lVar12);
    *pcVar6 = *pcVar6 + cVar9;
    iVar5 = (int)CONCAT71((uint7)(uint3)(uVar4 >> 8),0x67) + 0x5680500;
    cVar11 = (char)iVar5;
    uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11((char)((uint)iVar5 >> 8) + cVar11,cVar11)
                    );
    puVar8 = (uint *)(ulonglong)uVar4;
    iVar5 = *param_2;
    *puVar8 = *puVar8 & uVar4;
    *(char *)puVar8 = (char)*puVar8 + cVar11;
    cVar11 = (cVar10 - (char)iVar5) - (char)*param_2;
    lVar12 = CONCAT71(uVar13,cVar11);
    *param_2 = *param_2 + (int)lVar12;
    bVar15 = bVar15 | *(byte *)(lVar12 * 2);
    *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) =
         *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + (char)uVar2;
  pcVar6 = (char *)(unaff_RDI & 0xffffffff);
  *pcVar6 = *pcVar6 + (char)pcVar6;
  uVar2 = (uint)(short)pcVar6;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)((ulonglong)pcVar6 >> 8);
  uVar3 = uVar2 + 0x553ff00;
  *(char *)((ulonglong)uVar3 + 0x2a) = *(char *)((ulonglong)uVar3 + 0x2a) + cVar10;
  bVar14 = *param_1;
  *param_1 = *param_1 + (byte)uVar3;
  uVar4 = (uint)CARRY1(bVar14,(byte)uVar3);
  uVar4 = ((uVar2 + 0x436fef6) - uVar4) + 0xff01100 +
          (uint)(uVar3 < 0x11d000a || uVar2 + 0x436fef6 < uVar4);
  piVar7 = (int *)(ulonglong)uVar4;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || uVar4 == 0) {
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(cVar11,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(cVar11,unaff_BL)) >> 1 |
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar11,unaff_BL)) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)piVar7 + 7) = *(byte *)((longlong)piVar7 + 7) | (byte)(uVar4 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar4;
    *piVar7 = *piVar7 + (int)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

