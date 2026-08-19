// Function: FUN_140070760
// Addr: 140070760
// Size: 35 bytes


/* WARNING: Removing unreachable block (ram,0x0001400707d3) */
/* WARNING: Removing unreachable block (ram,0x0001400707e4) */
/* WARNING: Removing unreachable block (ram,0x000140070ab1) */
/* WARNING: Removing unreachable block (ram,0x000140070ab8) */
/* WARNING: Removing unreachable block (ram,0x000140070ace) */
/* WARNING: Removing unreachable block (ram,0x000140070adc) */
/* WARNING: Removing unreachable block (ram,0x000140070ae0) */
/* WARNING: Removing unreachable block (ram,0x000140070ba0) */
/* WARNING: Removing unreachable block (ram,0x000140070ae9) */
/* WARNING: Removing unreachable block (ram,0x000140070af2) */
/* WARNING: Removing unreachable block (ram,0x000140070b00) */
/* WARNING: Removing unreachable block (ram,0x000140070b08) */
/* WARNING: Removing unreachable block (ram,0x000140070b2f) */
/* WARNING: Removing unreachable block (ram,0x000140070b33) */
/* WARNING: Removing unreachable block (ram,0x000140070b47) */
/* WARNING: Removing unreachable block (ram,0x000140070bb8) */
/* WARNING: Removing unreachable block (ram,0x000140070b55) */
/* WARNING: Removing unreachable block (ram,0x000140070b5f) */
/* WARNING: Removing unreachable block (ram,0x000140070b65) */
/* WARNING: Removing unreachable block (ram,0x000140070b6d) */
/* WARNING: Removing unreachable block (ram,0x000140070b94) */
/* WARNING: Removing unreachable block (ram,0x000140070bce) */
/* WARNING: Removing unreachable block (ram,0x000140070be0) */
/* WARNING: Removing unreachable block (ram,0x000140070c56) */
/* WARNING: Removing unreachable block (ram,0x000140070bf7) */
/* WARNING: Removing unreachable block (ram,0x000140070c01) */
/* WARNING: Removing unreachable block (ram,0x000140070c10) */
/* WARNING: Removing unreachable block (ram,0x000140070c18) */
/* WARNING: Removing unreachable block (ram,0x000140070c45) */
/* WARNING: Removing unreachable block (ram,0x000140070c6c) */
/* WARNING: Removing unreachable block (ram,0x000140070c7e) */
/* WARNING: Removing unreachable block (ram,0x000140070c87) */
/* WARNING: Removing unreachable block (ram,0x000140070d5f) */
/* WARNING: Removing unreachable block (ram,0x000140070c90) */
/* WARNING: Removing unreachable block (ram,0x000140070c99) */
/* WARNING: Removing unreachable block (ram,0x000140070ca3) */
/* WARNING: Removing unreachable block (ram,0x000140070cab) */
/* WARNING: Removing unreachable block (ram,0x000140070cd6) */
/* WARNING: Removing unreachable block (ram,0x000140070cda) */
/* WARNING: Removing unreachable block (ram,0x000140070cf0) */
/* WARNING: Removing unreachable block (ram,0x000140070d5a) */
/* WARNING: Removing unreachable block (ram,0x000140070d79) */
/* WARNING: Removing unreachable block (ram,0x000140070d03) */
/* WARNING: Removing unreachable block (ram,0x000140070d10) */
/* WARNING: Removing unreachable block (ram,0x000140070d20) */
/* WARNING: Removing unreachable block (ram,0x000140070d28) */
/* WARNING: Removing unreachable block (ram,0x000140070d4f) */
/* WARNING: Removing unreachable block (ram,0x000140070d8d) */
/* WARNING: Removing unreachable block (ram,0x000140070d99) */
/* WARNING: Removing unreachable block (ram,0x000140070da6) */
/* WARNING: Removing unreachable block (ram,0x000140070dab) */
/* WARNING: Removing unreachable block (ram,0x000140070db0) */
/* WARNING: Removing unreachable block (ram,0x000140070dbf) */
/* WARNING: Removing unreachable block (ram,0x000140070dda) */
/* WARNING: Removing unreachable block (ram,0x000140070df4) */
/* WARNING: Removing unreachable block (ram,0x000140070df7) */
/* WARNING: Removing unreachable block (ram,0x000140070e06) */
/* WARNING: Removing unreachable block (ram,0x000140070a50) */
/* WARNING: Removing unreachable block (ram,0x000140070a62) */
/* WARNING: Removing unreachable block (ram,0x000140070a6c) */
/* WARNING: Removing unreachable block (ram,0x000140070a74) */
/* WARNING: Removing unreachable block (ram,0x000140070a7c) */
/* WARNING: Removing unreachable block (ram,0x000140070aa5) */
/* WARNING: Removing unreachable block (ram,0x0001400707f9) */
/* WARNING: Removing unreachable block (ram,0x000140070800) */

void FUN_140070760(undefined8 param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_180 [336];
  
  puVar3 = PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670;
  uVar5 = func_0x000140421ed0(PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670);
  func_0x000140017550(&stack0xfffffffffffffe38,puVar3,uVar5);
  uVar5 = FUN_140079cb0(&DAT_1404e6540,&stack0xfffffffffffffe38);
  puVar4 = DAT_1404e5400;
  for (puVar2 = (undefined8 *)*DAT_1404e5400; puVar2 != puVar4; puVar2 = (undefined8 *)*puVar2) {
    uVar1 = *(undefined4 *)((longlong)puVar2 + 0x7c);
    puVar6 = (undefined4 *)FUN_14007a2a0(uVar5,puVar2 + 2);
    *puVar6 = uVar1;
  }
  if (param_2 == '\0') {
    return;
  }
  uVar5 = FUN_140005fb0(&stack0xfffffffffffffe38);
  uVar5 = FUN_140005df0(uVar5,"bin/playliststatetime.bin");
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(auStack_180,uVar5);
}

