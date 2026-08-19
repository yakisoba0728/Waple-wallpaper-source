// Function: FUN_1404a61cc
// Addr: 1404a61cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a61cc(char *param_1,uint *param_2)

{
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 & (uint)param_1;
  bVar3 = (byte)param_2 | param_1[CONCAT71(unaff_00000019,unaff_BL)];
  pcVar2 = (char *)((ulonglong)(in_EAX + 0xd0000a34) & 0xffffffffffffff09);
  *pcVar2 = *pcVar2 + unaff_BL;
  uVar1 = (uint)pcVar2 & 0x11800009;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  pcVar2 = (char *)((ulonglong)CONCAT31((int3)(uVar1 >> 8),(char)uVar1 + bVar3) & 0xffffffffffffff09
                   );
  *pcVar2 = *pcVar2 + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)((longlong)pcVar2 * 2) = *(char *)((longlong)pcVar2 * 2) + (char)pcVar2;
  param_1[CONCAT71(unaff_00000019,unaff_BL)] = param_1[CONCAT71(unaff_00000019,unaff_BL)] + bVar3;
  param_1[CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar4,bVar3))] =
       param_1[CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar4,bVar3))] + cVar4;
  pcVar2 = (char *)(CONCAT71((int7)((ulonglong)pcVar2 >> 8),(char)pcVar2 + bVar3) &
                   0xffffffffffffff09);
  *pcVar2 = *pcVar2 + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

