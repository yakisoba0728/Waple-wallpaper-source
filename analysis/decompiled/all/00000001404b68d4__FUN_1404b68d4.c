// Function: FUN_1404b68d4
// Addr: 1404b68d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b68d4(char *param_1,char param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 in_RAX;
  char *unaff_RBX;
  byte *pbVar3;
  
  bVar2 = (char)in_RAX + 0x60;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  uVar1 = *(undefined4 *)(pbVar3 + 2);
  *pbVar3 = *pbVar3 ^ bVar2;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *unaff_RBX = *unaff_RBX + param_2 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

