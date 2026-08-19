// Function: FUN_1404a2c60
// Addr: 1404a2c60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2c60(char param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  char *in_RAX;
  char cVar3;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  
  cVar3 = (char)((ushort)param_2 >> 8);
  *unaff_RSI = *unaff_RSI + cVar3;
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar3) + 0x56d0a00;
  *unaff_RSI = *unaff_RSI + cVar3;
  *param_4 = *param_4 + (byte)uVar2;
  unaff_RDI[1] = unaff_RDI[1] + param_1;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

