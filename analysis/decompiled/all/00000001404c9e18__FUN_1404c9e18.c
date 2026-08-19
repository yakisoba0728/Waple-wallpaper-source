// Function: FUN_1404c9e18
// Addr: 1404c9e18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9e18(char *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  uint *puVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_R12B;
  
  param_1[param_2] = param_1[param_2] | (byte)((ulonglong)param_2 >> 8);
  LOCK();
  uVar2 = *(undefined1 *)(in_RAX + 0x32);
  *(undefined1 *)(in_RAX + 0x32) = unaff_BL;
  UNLOCK();
  pcVar1 = (char *)((in_RAX - 0x62d3ffce) + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,uVar2)) * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1 + unaff_R12B;
  puVar3 = (uint *)(in_RAX | 4);
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)param_1;
  *puVar3 = *puVar3 | (uint)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

