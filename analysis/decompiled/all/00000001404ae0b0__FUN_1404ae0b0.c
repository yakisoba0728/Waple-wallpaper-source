// Function: FUN_1404ae0b0
// Addr: 1404ae0b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae0b0(undefined8 param_1,short *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint *puVar4;
  byte *pbVar5;
  char unaff_BL;
  char unaff_BH;
  float10 in_ST0;
  float10 in_ST1;
  undefined7 uVar6;
  
  puVar4 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *param_2 = (short)in_ST0;
  *puVar4 = *puVar4 & (uint)&stack0x00000000;
  *(char *)((longlong)puVar4 + -0x57ffffd1) = *(char *)((longlong)puVar4 + -0x57ffffd1) + unaff_BH;
  *(char *)puVar4 = (char)*puVar4;
  *(char *)((longlong)puVar4 + -0x77ffffcf) = *(char *)((longlong)puVar4 + -0x77ffffcf) + unaff_BL;
  bVar2 = (byte)*puVar4;
  uVar6 = (undefined7)((ulonglong)puVar4 >> 8);
  pbVar5 = (byte *)CONCAT71(uVar6,bVar2);
  pbVar5[0x33] = pbVar5[0x33] + unaff_BH;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  *(undefined8 *)((ulonglong)in_EAX - 8) = 0xffffffffac600034;
  bVar3 = *pbVar5;
  *param_2 = (short)in_ST1;
  uRam00000001744fe0e4 =
       uRam00000001744fe0e4 & (uint)CONCAT71(uVar6,bVar2 + bVar3 + CARRY1(bVar1,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

