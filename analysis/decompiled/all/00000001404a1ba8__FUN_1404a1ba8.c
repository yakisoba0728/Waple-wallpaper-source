// Function: FUN_1404a1ba8
// Addr: 1404a1ba8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ba8(undefined1 *param_1,int *param_2)

{
  char *in_RAX;
  char unaff_BL;
  int *unaff_RSI;
  
  *param_1 = *param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
  *unaff_RSI = *unaff_RSI + (int)&stack0xfffffffffffffff8;
  *(byte *)unaff_RSI =
       (char)*unaff_RSI +
       ((byte)((ulonglong)in_RAX >> 8) |
       (byte)((uint)*(undefined4 *)(ulonglong)(uint)(int)(short)in_RAX >> 8));
  *param_2 = *param_2 + (int)&stack0xfffffffffffffff8;
  *(char *)param_2 = (char)*param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

