// Function: FUN_1404c93b8
// Addr: 1404c93b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c93b8(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar2;
  char *in_RAX;
  uint *puVar1;
  char unaff_SPL;
  longlong unaff_RSI;
  int unaff_EDI;
  
  *(int *)(param_1 + unaff_RSI + 0x4c92c000) =
       *(int *)(param_1 + unaff_RSI + 0x4c92c000) + unaff_EDI;
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar2;
  *in_RAX = *in_RAX + (char)in_RAX;
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02');
  *puVar1 = *puVar1 ^ (uint)puVar1;
  *(undefined1 *)(param_2 + 0x21004c) = *(undefined1 *)(param_2 + 0x21004c);
  *(char *)((longlong)puVar1 + -0x3fffce45) = *(char *)((longlong)puVar1 + -0x3fffce45) + cVar2;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

