// Function: FUN_1404a8648
// Addr: 1404a8648
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

int FUN_1404a8648(longlong param_1,char *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *in_RAX;
  char *pcVar7;
  char *pcVar9;
  char cVar10;
  uint unaff_EBP;
  byte *unaff_RDI;
  char in_ZF;
  char *pcVar6;
  int *piVar8;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  pcVar9 = (char *)(param_1 + -1);
  if (pcVar9 == (char *)0x0 || in_ZF != '\0') {
    uVar5 = (uint)in_RAX | *in_RAX;
    pcVar6 = (char *)(ulonglong)uVar5;
    pcVar7 = (char *)((ulonglong)(unaff_EBP ^ *(uint *)(param_2 + 0xb)) + 0x4a +
                     (longlong)pcVar6 * 4);
    *pcVar7 = *pcVar7 + (char)pcVar9;
    bVar3 = (byte)uVar5;
    *pcVar9 = *pcVar9 + bVar3;
    *unaff_RDI = *unaff_RDI ^ bVar3;
    *pcVar6 = *pcVar6 + cVar10;
    *(char *)(ulonglong)(uint)(int)(short)uVar5 =
         *(char *)(ulonglong)(uint)(int)(short)uVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + cVar10;
  pcVar7 = (char *)(ulonglong)(uint)(int)(short)in_RAX;
  *pcVar7 = *pcVar7 + (char)in_RAX;
  cVar10 = pcVar7[0x781d0001];
  cVar4 = (char)in_RAX + *pcVar7 + -0x7e;
  uVar5 = CONCAT31((int3)(char)((ulonglong)in_RAX >> 8),cVar4);
  piVar8 = (int *)(ulonglong)uVar5;
  *(char *)piVar8 = (char)*piVar8 + cVar4;
  uRam00000001a84f86cc = uRam00000001a84f86cc & uVar5;
  iVar2 = *piVar8;
  puVar1 = (undefined1 *)(CONCAT71((int7)((ulonglong)pcVar9 >> 8),(char)pcVar9 - cVar10) + 0xb);
  *puVar1 = *puVar1;
  return uVar5 + iVar2;
}

