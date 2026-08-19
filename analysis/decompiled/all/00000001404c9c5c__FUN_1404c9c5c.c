// Function: FUN_1404c9c5c
// Addr: 1404c9c5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9c6e) overlaps instruction at (ram,0x0001404c9c6a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c9c39) */
/* WARNING: Removing unreachable block (ram,0x0001404c9c11) */

void FUN_1404c9c5c(char *param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  char cVar3;
  undefined8 in_RAX;
  undefined7 uVar4;
  char *pcVar2;
  byte bVar5;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  bool bVar6;
  
  bVar5 = (byte)param_1;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = in(10);
  *param_2 = *param_2 + (char)((ulonglong)in_RAX >> 8);
  if (*param_2 == '\0') {
    bVar1 = bVar1 ^ *(byte *)CONCAT71(uVar4,bVar1);
    param_2 = (char *)(ulonglong)(uint)((int)CONCAT71(uVar4,bVar1) >> 0x1f);
    pcVar2 = (char *)CONCAT71(uVar4,bVar1 ^ *param_3);
  }
  else {
    bVar6 = CARRY1(bRam00000001484ca8cd,bVar5);
    bRam00000001484ca8cd = bRam00000001484ca8cd + bVar5;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    pcVar2 = (char *)(ulonglong)((int)(byte *)CONCAT71(uVar4,bVar1) + 0x32492000 + (uint)bVar6);
    param_1[0x70003249] = param_1[0x70003249] + unaff_BL;
  }
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)pcVar2 * 2) = *(char *)((longlong)pcVar2 * 2) + (char)pcVar2;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] +
       (char)((ulonglong)param_2 >> 8);
  cVar3 = (char)((ulonglong)pcVar2 >> 8);
  *(char *)((longlong)register0x00000020 + (longlong)param_1) =
       *(char *)((longlong)register0x00000020 + (longlong)param_1) + cVar3;
  param_1[0x32] = param_1[0x32] & bVar5;
  param_1[0x70003249] = param_1[0x70003249] + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  *pcVar2 = *pcVar2 + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)register0x00000020 + unaff_RSI) =
       *(char *)((longlong)register0x00000020 + unaff_RSI) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

