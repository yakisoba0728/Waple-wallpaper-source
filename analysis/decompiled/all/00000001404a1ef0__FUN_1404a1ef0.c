// Function: FUN_1404a1ef0
// Addr: 1404a1ef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ef0(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined4 uVar3;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = cRam0021004a1e080004 +
          *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,cRam0021004a1e080004));
  uVar3 = CONCAT31(uVar4,cVar2);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar3) + unaff_RBX);
  *pcVar1 = *pcVar1 + (char)((int)in_EAX >> 0x1f);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar3) + -0x60);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

