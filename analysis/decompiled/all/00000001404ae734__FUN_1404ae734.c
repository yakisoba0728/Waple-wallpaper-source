// Function: FUN_1404ae734
// Addr: 1404ae734
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae734(byte *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  byte bVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  byte in_CF;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  byte *unaff_retaddr;
  longlong lStackX_8;
  char *pcStackX_18;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  *(byte *)(unaff_RBX + param_2) = *(byte *)(unaff_RBX + param_2) << 1 | in_CF;
  *(char *)(unaff_RBP + 0x13) = *(char *)(unaff_RBP + 0x13) + bVar8;
  uVar2 = in(0x4a);
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)uVar2;
  uVar4 = (uint)CARRY1(bVar1,(byte)uVar2);
  iVar3 = uVar2 + 0xa2150005 + uVar4 + unaff_ESI +
          (uint)(0x5deafffa < uVar2 || CARRY4(uVar2 + 0xa2150005,uVar4));
  pavgb(in_MM1_Ba,(char)uRam00000001409af31f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam00000001409af31f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam00000001409af31f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam00000001409af31f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam00000001409af31f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam00000001409af31f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam00000001409af31f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam00000001409af31f >> 0x38));
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  uVar4 = iVar3 + 0x8bd2fffa;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  param_1[param_2] = param_1[param_2] - (char)(uVar4 >> 8);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar9;
  bVar1 = (byte)uVar4;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar1 * '\x02');
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4 + (uint)CARRY1(bVar1,bVar1);
  unaff_retaddr[0x13] = -unaff_retaddr[0x13];
  pcVar7 = (char *)((ulonglong)uVar4 - 0x1a);
  *pcVar7 = *pcVar7 + bVar9;
  *unaff_retaddr = *unaff_retaddr + 8;
  uVar4 = uVar4 + 0xc4050002;
  pbVar5 = (byte *)(ulonglong)uVar4;
  *pbVar5 = *pbVar5 | (byte)uVar4;
  unaff_retaddr[0x13] = -unaff_retaddr[0x13];
  bVar1 = *unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + bVar8;
  uVar4 = uVar4 + *(int *)pbVar5 + (uint)CARRY1(bVar1,bVar8);
  puVar6 = (uint *)(ulonglong)uVar4;
  bVar9 = bVar9 & 0x4a;
  *unaff_retaddr = *unaff_retaddr + (char)(uVar4 >> 8);
  *(char *)puVar6 = (char)*puVar6 + (char)uVar4;
  uVar2 = uVar4 + *puVar6 + (uint)CARRY1(bVar9,bVar9);
  pcVar7 = (char *)(ulonglong)uVar2;
  *(int *)(lStackX_8 + 0x13) =
       *(int *)(lStackX_8 + 0x13) + (int)lStackX_8 +
       (uint)(CARRY4(uVar4,*puVar6) || CARRY4(uVar4 + *puVar6,(uint)CARRY1(bVar9,bVar9)));
  bVar1 = (byte)uVar2;
  pcVar7[0x21004ae6] = pcVar7[0x21004ae6] + bVar1;
  *pcVar7 = *pcVar7 + bVar1;
  uVar4 = CONCAT31((int3)(uVar2 >> 8),bVar1 * '\x02');
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4 + (uint)CARRY1(bVar1,bVar1);
  pcStackX_18[0x13] = -pcStackX_18[0x13];
  pcVar7 = (char *)((ulonglong)uVar4 - 0x1a);
  *pcVar7 = *pcVar7 + bVar9 * '\x02';
  *pcStackX_18 = *pcStackX_18 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

