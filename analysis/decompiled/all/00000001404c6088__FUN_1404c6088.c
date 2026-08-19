// Function: FUN_1404c6088
// Addr: 1404c6088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6088(int param_1,char *param_2,byte param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  char *in_RAX;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar9;
  byte *pbVar10;
  uint *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar8;
  
  puVar1 = (undefined1 *)(unaff_RDI + CONCAT44(unaff_0000002c,unaff_EBP));
  *puVar1 = *puVar1;
  uVar9 = param_1 + iRam000000019fe860c1;
  pcVar8 = (char *)(ulonglong)uVar9;
  *pcVar8 = *pcVar8 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02') | 0x2f;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)uVar6;
  uVar5 = (uint)uVar6 | 0x5f9c002f;
  *pcVar8 = *pcVar8 + unaff_R12B;
  cVar3 = (char)uVar5;
  *(char *)((ulonglong)uVar5 * 2) = *(char *)((ulonglong)uVar5 * 2) + cVar3;
  cVar4 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar4,cVar3));
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 | uVar5;
  *(char *)((longlong)puVar7 + (longlong)pcVar8) =
       *(char *)((longlong)puVar7 + (longlong)pcVar8) + cVar4;
  puVar1 = (undefined1 *)(unaff_RDI + CONCAT44(unaff_0000002c,unaff_EBP));
  *puVar1 = *puVar1;
  pbVar10 = (byte *)(ulonglong)(uVar9 + iRam000000019fe860e9);
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + param_3;
  cVar4 = cVar3 + '\x01' + CARRY1(bVar2,param_3);
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
  *param_2 = *param_2 + (char)param_2;
  *pcVar8 = *pcVar8 + cVar4;
  *unaff_RBX = *unaff_RBX & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

