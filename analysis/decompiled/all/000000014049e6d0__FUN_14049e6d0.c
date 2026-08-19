// Function: FUN_14049e6d0
// Addr: 14049e6d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e6fa) overlaps instruction at (ram,0x00014049e6f4)
    */

void FUN_14049e6d0(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  byte bVar6;
  undefined6 uVar7;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  (&stack0x00000000)[(longlong)param_1] =
       (&stack0x00000000)[(longlong)param_1] + (char)((ulonglong)in_RAX >> 8);
  do {
    param_1[0xd66000] = param_1[0xd66000] + bVar6;
    pcVar1 = (char *)(unaff_RSI + param_2 * 8);
    *pcVar1 = *pcVar1 + unaff_BH;
    cVar3 = (char)((ulonglong)in_RAX >> 8);
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar3;
    *param_1 = *param_1 + cVar3;
    *in_RAX = *in_RAX + (char)param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar3 = in(8);
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
    *in_RAX = *in_RAX + cVar3;
    if (*in_RAX != '\0') goto code_r0x00014049e6ef;
    cVar2 = *in_RAX;
    *in_RAX = *in_RAX + cVar3;
  } while (SCARRY1(cVar2,cVar3) != *in_RAX < '\0');
  *in_RAX = *in_RAX + cVar3;
  uVar5 = in(0x49);
  in_RAX = (char *)(ulonglong)uVar5;
code_r0x00014049e6ef:
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  param_1[0xd66000] = param_1[0xd66000] + bVar6;
  pcVar1 = (char *)(unaff_RSI + param_2 * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar4;
  bVar6 = bVar6 | *(byte *)(unaff_RDI +
                           CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                    bVar4 | *(byte *)((longlong)in_RAX * 2)));
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6,(char)param_2)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

