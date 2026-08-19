// Function: FUN_1404c93a8
// Addr: 1404c93a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c93a8(char *param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  int in_EAX;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  longlong unaff_RBX;
  char unaff_SPL;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_SPL;
  uVar2 = in_EAX + 0x64050002;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  *(char *)(unaff_RBX + -0x43feffcf) = *(char *)(unaff_RBX + -0x43feffcf) >> 0x11;
  pcVar3 = (char *)(param_2 & 0xffffffff);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)pcVar3 >> 8),(char)pcVar3 * '\x02');
  *puVar4 = *puVar4 ^ (uint)puVar4;
  puVar1 = (undefined1 *)((ulonglong)CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 * '\x02') + 0x21004c);
  *puVar1 = *puVar1;
  *(char *)((longlong)puVar4 + -0x3fffce45) =
       *(char *)((longlong)puVar4 + -0x3fffce45) + (char)((ulonglong)pcVar3 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

