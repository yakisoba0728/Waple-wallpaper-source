// Function: FUN_1404c2d98
// Addr: 1404c2d98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2d98(undefined8 param_1,byte param_2)

{
  uint uVar1;
  longlong in_RAX;
  byte bVar2;
  undefined6 uVar3;
  char unaff_BL;
  longlong unaff_RSI;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar2 = (byte)((ulonglong)param_1 >> 8) | param_2;
  uVar1 = (int)in_RAX + *(int *)(in_RAX * 2 + 0x84e0002);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_1)) + unaff_BL;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BL;
  *(char *)(ulonglong)(uVar1 & 0x1a011c00) = *(char *)(ulonglong)(uVar1 & 0x1a011c00) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

