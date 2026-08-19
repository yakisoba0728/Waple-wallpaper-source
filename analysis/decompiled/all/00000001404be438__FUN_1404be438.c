// Function: FUN_1404be438
// Addr: 1404be438
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be438(longlong param_1,undefined1 *param_2)

{
  uint3 uVar1;
  undefined1 uVar2;
  uint in_EAX;
  uint uVar3;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  longlong unaff_RBX;
  byte bStack_8;
  int *piVar4;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  param_2[unaff_RBX] = param_2[unaff_RBX] + cVar7;
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + (char)(in_EAX >> 8);
  param_2[param_1] = param_2[param_1] + bVar6;
  uVar3 = in_EAX & 0x4b096000;
  piVar4 = (int *)(ulonglong)uVar3;
  cRam00000000b9790025 = cRam00000000b9790025 + (char)(uVar3 >> 8);
  if ((POPCOUNT(cRam00000000b9790025) & 1U) != 0) {
    param_2[-0x3c] = param_2[-0x3c] + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar4 = (char)*piVar4 + bVar6;
  if ((char)*piVar4 != '\0') {
    bStack_8 = (byte)in_EAX;
    *piVar4 = *piVar4 + uVar3 + (uint)(0xda < bStack_8);
    *(byte *)((longlong)piVar4 + (longlong)param_2) =
         *(byte *)((longlong)piVar4 + (longlong)param_2) | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)piVar4 = (char)*piVar4 + cVar7;
  uVar3 = in_EAX & 0x4b084000;
  *param_2 = *param_2;
  *(undefined1 *)(ulonglong)uVar3 = *(undefined1 *)(ulonglong)uVar3;
  uVar1 = (uint3)(uVar3 >> 8);
  uVar2 = in(9);
  *(char *)(ulonglong)CONCAT31(uVar1,uVar2) = *(char *)(ulonglong)CONCAT31(uVar1,uVar2) + cVar7;
  pcVar5 = (char *)((ulonglong)uVar1 << 8);
  *pcVar5 = *pcVar5;
  *pcVar5 = *pcVar5 + cVar7;
  pcVar5 = (char *)((ulonglong)uVar1 << 8);
  *pcVar5 = *pcVar5 + bVar6;
  *pcVar5 = *pcVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

