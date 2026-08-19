// Function: FUN_1404c10b0
// Addr: 1404c10b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c10b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *in_RAX;
  int unaff_ESP;
  byte *unaff_RSI;
  
  bVar3 = *in_RAX;
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  bVar4 = (byte)in_RAX;
  in_RAX[param_1] = in_RAX[param_1] + bVar4;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX + bVar4;
  *in_RAX = *in_RAX & bVar4;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar4;
  iRam00000001a86210d5 = (iRam00000001a86210d5 - unaff_ESP) - (uint)CARRY1(bVar2,bVar4);
  piVar1 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                            CONCAT31((int3)((ulonglong)param_2 >> 8),(char)param_2 + bVar3)) +
                  -0x1ff40ff3);
  *piVar1 = *piVar1 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

