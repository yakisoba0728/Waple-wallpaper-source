// Function: FUN_14049e694
// Addr: 14049e694
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x00014049e695) overlaps instruction at (ram,0x00014049e694)
    */

void FUN_14049e694(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char cVar5;
  char *in_RAX;
  char unaff_BH;
  char unaff_SPL;
  char *unaff_RSI;
  uint *puVar4;
  
  while( true ) {
    *param_4 = *param_4 + unaff_SPL;
    *in_RAX = *in_RAX + (char)in_RAX;
    unaff_RSI[param_2 * 8] = unaff_RSI[param_2 * 8] + unaff_BH;
    *(char *)(param_2 + 0x6c0000d6) =
         *(char *)(param_2 + 0x6c0000d6) + (char)((ulonglong)in_RAX >> 8);
    uVar2 = in(0x49);
    puVar4 = (uint *)(ulonglong)uVar2;
    cVar5 = (char)(uVar2 >> 8);
    *param_1 = *param_1 + cVar5;
    cVar1 = (char)uVar2;
    *(char *)puVar4 = (char)*puVar4 + cVar1;
    *(char *)((longlong)puVar4 + -0x2a) = *(char *)((longlong)puVar4 + -0x2a) + cVar5;
    uVar3 = *puVar4;
    *(char *)puVar4 = (char)*puVar4 + cVar1;
    if (SCARRY1((char)uVar3,cVar1) == (char)*puVar4 < '\0') break;
    *puVar4 = *puVar4 & uVar2;
    *(char *)puVar4 = (char)*puVar4 + cVar1;
    uVar3 = in(0x49);
    in_RAX = (char *)(ulonglong)uVar3;
    *param_1 = *param_1 + (char)(uVar3 >> 8);
  }
  *(char *)puVar4 = (char)*puVar4 + cVar1;
  uVar3 = in(0x49);
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

