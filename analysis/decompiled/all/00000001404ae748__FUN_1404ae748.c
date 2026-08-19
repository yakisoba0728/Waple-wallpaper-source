// Function: FUN_1404ae748
// Addr: 1404ae748
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae748(char *param_1,longlong param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar7;
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
  char *pcVar6;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  pavgb(in_MM1_Ba,(char)uRam00000001409af31f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam00000001409af31f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam00000001409af31f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam00000001409af31f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam00000001409af31f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam00000001409af31f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam00000001409af31f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam00000001409af31f >> 0x38));
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar2 = in_EAX + 0x8bd2fffa;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  param_1[param_2] = param_1[param_2] - (char)(uVar2 >> 8);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar7;
  bVar1 = (byte)uVar2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1 * '\x02');
  uVar2 = uVar2 + *(int *)(ulonglong)uVar2 + (uint)CARRY1(bVar1,bVar1);
  unaff_retaddr[0x13] = -unaff_retaddr[0x13];
  pcVar6 = (char *)((ulonglong)uVar2 - 0x1a);
  *pcVar6 = *pcVar6 + bVar7;
  *unaff_retaddr = *unaff_retaddr + 8;
  uVar2 = uVar2 + 0xc4050002;
  pbVar4 = (byte *)(ulonglong)uVar2;
  *pbVar4 = *pbVar4 | (byte)uVar2;
  unaff_retaddr[0x13] = -unaff_retaddr[0x13];
  bVar1 = *unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (byte)param_2;
  uVar2 = uVar2 + *(int *)pbVar4 + (uint)CARRY1(bVar1,(byte)param_2);
  puVar5 = (uint *)(ulonglong)uVar2;
  bVar7 = bVar7 & 0x4a;
  *unaff_retaddr = *unaff_retaddr + (char)(uVar2 >> 8);
  *(char *)puVar5 = (char)*puVar5 + (char)uVar2;
  uVar3 = uVar2 + *puVar5 + (uint)CARRY1(bVar7,bVar7);
  pcVar6 = (char *)(ulonglong)uVar3;
  *(int *)(lStackX_8 + 0x13) =
       *(int *)(lStackX_8 + 0x13) + (int)lStackX_8 +
       (uint)(CARRY4(uVar2,*puVar5) || CARRY4(uVar2 + *puVar5,(uint)CARRY1(bVar7,bVar7)));
  bVar1 = (byte)uVar3;
  pcVar6[0x21004ae6] = pcVar6[0x21004ae6] + bVar1;
  *pcVar6 = *pcVar6 + bVar1;
  uVar2 = CONCAT31((int3)(uVar3 >> 8),bVar1 * '\x02');
  uVar2 = uVar2 + *(int *)(ulonglong)uVar2 + (uint)CARRY1(bVar1,bVar1);
  pcStackX_18[0x13] = -pcStackX_18[0x13];
  pcVar6 = (char *)((ulonglong)uVar2 - 0x1a);
  *pcVar6 = *pcVar6 + bVar7 * '\x02';
  *pcStackX_18 = *pcStackX_18 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

