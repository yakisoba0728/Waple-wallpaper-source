// Function: FUN_1404af8e8
// Addr: 1404af8e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af8e8(uint *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  char *in_RAX;
  int *unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  int unaff_EDI;
  
  *(int *)(in_RAX + 1) = *(int *)(in_RAX + 1) - unaff_EDI;
  *unaff_RSI = *unaff_RSI + (char)param_2;
  cVar1 = *in_RAX;
  *unaff_RBX = *unaff_RBX + (int)param_1;
  iVar2 = ((uint)in_RAX | *param_1) + 0xfd0ffc00;
  *(byte *)param_1 = (byte)*param_1 ^ (byte)((uint)iVar2 >> 8);
  *(undefined1 *)
   CONCAT62((int6)((ulonglong)param_2 >> 0x10),
            CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,(char)param_2)) = param_4;
  *(char *)(unaff_RBP + 0x78) = *(char *)(unaff_RBP + 0x78) + (char)iVar2;
  in(0x1a);
  cRam00000001654b14ed = cRam00000001654b14ed + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

