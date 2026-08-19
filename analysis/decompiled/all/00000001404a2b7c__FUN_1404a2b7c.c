// Function: FUN_1404a2b7c
// Addr: 1404a2b7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2b7c(longlong param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  undefined1 *puVar3;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RSI;
  bool bVar4;
  int *piVar2;
  
  bVar4 = CARRY4(uRam0000000141672b8c,unaff_EBX);
  uRam0000000141672b8c = uRam0000000141672b8c + unaff_EBX;
  uVar1 = in_EAX + 0xff01100 + (uint)bVar4;
  piVar2 = (int *)(ulonglong)uVar1;
  puVar3 = (undefined1 *)(param_1 + -1);
  if (puVar3 == (undefined1 *)0x0 || uVar1 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *puVar3 = *puVar3;
    *(byte *)((longlong)piVar2 + 7) = *(byte *)((longlong)piVar2 + 7) | (byte)(uVar1 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar1;
    *piVar2 = *piVar2 + param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

