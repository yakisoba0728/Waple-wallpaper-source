// Function: FUN_1404a1ee0
// Addr: 1404a1ee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ee0(char param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 in_register_00000004;
  byte *pbVar6;
  longlong unaff_RBX;
  undefined4 uVar4;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = (char)in_EAX - 0x10;
  uVar4 = CONCAT31(uVar5,bVar2);
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),
                            (char)param_2 + *(char *)(CONCAT44(in_register_00000004,uVar4) + 0x21));
  *pbVar6 = *pbVar6 | bVar2;
  *(char *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + param_1;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,CONCAT31(uVar5,bVar2)) ^ 0x18) - 0x60);
  *pcVar1 = *pcVar1 + (bVar2 ^ 0x18);
  cVar3 = cRam0021004a1e080004 +
          *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cRam0021004a1e080004));
  uVar4 = CONCAT31(uVar5,cVar3);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar4) + unaff_RBX);
  *pcVar1 = *pcVar1 + (char)((int)in_EAX >> 0x1f);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar4) + -0x60);
  *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

