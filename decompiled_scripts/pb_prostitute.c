#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char* sLocal_63 = NULL;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 16;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	int iLocal_289[3] = { 0, 0, 0 };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308[4] = { 0, 0, 0, 0 };
	struct<7> Local_313[4];
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	float fLocal_360 = 0f;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 15;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_56 = { 0f, 0f, 0f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_293 = -1;
	fLocal_360 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x675D9C12C73D3DE7();
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (func_554(unk_0x93E99A2DBCBA9CFA(), 1))
		{
			unk_0x675D9C12C73D3DE7();
		}
		if (func_553(unk_0x93E99A2DBCBA9CFA(), 1))
		{
			unk_0x675D9C12C73D3DE7();
		}
	}
	if (func_552(13) || func_552(14))
	{
		unk_0x675D9C12C73D3DE7();
	}
	if (!func_551() && !unk_0xA26A9A07F761D8F8())
	{
		if (unk_0x55EEDBBFDC6E810F(35))
		{
			func_542();
			func_541(1);
			func_536(&uLocal_391);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_96 = uScriptParam_0;
	if (unk_0xA26A9A07F761D8F8())
	{
		func_535();
		unk_0xCF50389093DECE87(2, 0, unk_0x93E99A2DBCBA9CFA());
		func_530(0, -1, 0);
		unk_0xF1440897111F3111(0);
	}
	func_529();
	func_528(128);
	while (iLocal_62)
	{
		bVar0 = true;
		func_525(&uLocal_391);
		if (func_551())
		{
			if (func_524(1024))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0x1951CE8AED052DA4(unk_0xC1A5EC5C986B98AD()) && unk_0x655790C883F82CEB(unk_0xC1A5EC5C986B98AD()))
					{
						func_528(1024);
						unk_0xC7A494C74ED33C50(unk_0xC1A5EC5C986B98AD());
					}
				}
			}
			if (!func_524(1024) && func_524(2048))
			{
				unk_0x675D9C12C73D3DE7();
			}
			if (!unk_0x7DE17ACDD8BA2642(iLocal_96))
			{
				bVar0 = false;
			}
			else if (!unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				bVar0 = false;
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
		}
		if (!func_551() || !func_524(2048))
		{
			func_517();
			if (func_551())
			{
				func_516();
				if (func_524(128))
				{
					iLocal_62 = 0;
				}
			}
			if (func_511())
			{
				if (bVar0)
				{
					if (iLocal_294 > 0)
					{
						func_506(&uLocal_391);
					}
					func_504();
					func_502();
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (unk_0x462D40DF014BDC2B(iLocal_96))
								{
									iLocal_293 = func_501();
								}
								else if (func_499())
								{
									iLocal_293 = 4;
								}
							}
							else if (func_494())
							{
								if (func_493())
								{
									if (func_551())
									{
										if (unk_0xB6B927AA8C3DAD36(iLocal_96))
										{
											unk_0x2B8574FAEA21141B(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xBDB0FB8EEE50C9CD(iLocal_96);
										}
									}
									else
									{
										unk_0x2B8574FAEA21141B(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_294 = 1;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_491(iLocal_49, 4096))
							{
								func_490();
							}
							if (func_489())
							{
								iLocal_294 = 2;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_484())
							{
								iLocal_294 = 3;
								func_482(&iLocal_49, 64);
								Global_32317 = 1;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_98(&uLocal_391);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_491(iLocal_49, 2))
	{
	}
	func_492(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_542();
	func_536(&uLocal_391);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_62 = 1;
	}
	else
	{
		iLocal_62 = 0;
	}
}

void func_3()
{
	if (iLocal_295 > 0)
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_97))
			{
				if (!unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
				{
					func_97();
				}
			}
		}
	}
	if (!unk_0x7DE17ACDD8BA2642(iLocal_97) || unk_0x055111B11E6624FD(iLocal_97, 0))
	{
		func_96(15);
	}
	switch (iLocal_295)
	{
		case 0:
			if (!iLocal_296 == 0)
			{
				iLocal_295 = 1;
			}
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_88();
			break;
		
		case 3:
			func_71();
			break;
		
		case 4:
			func_62();
			break;
		
		case 5:
			func_59();
			break;
		
		case 6:
			if (!unk_0x66599E73DBA5A850(iLocal_97))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_perform_sequence")) == 7)
				{
					iLocal_65 = unk_0xA5E11AF0A2B928C1();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= 10000 || !unk_0xEAEF747543427AC5(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
					{
						func_492("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		
		case 7:
			if (!unk_0x9ADDEEB34545AD94(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				unk_0x350F65B0612C7A16(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				unk_0xC562419B5DA3BB96(iLocal_97, iLocal_98, Local_90, (unk_0x9CEF19C982CCE911(iLocal_98) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_90, unk_0x30BE8A934C020461(iLocal_96, 1)) < 25f && unk_0xF5F493B789EA063E(iLocal_97, joaat("script_task_vehicle_drive_to_coord")) != 1)
			{
				iLocal_297 = unk_0x15A88CFAAFFC6C4B(1, 3);
				iLocal_295 = 11;
			}
			if (func_55(iLocal_97))
			{
				func_96(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_96(15);
			break;
		
		case 15:
			if (unk_0x7DE17ACDD8BA2642(iLocal_96) && unk_0x7DE17ACDD8BA2642(iLocal_98))
			{
				if (unk_0xE0D346789C5160EB(iLocal_96, iLocal_98, 0))
				{
					if (!unk_0x055111B11E6624FD(iLocal_97, 0))
					{
						if (unk_0xF5F493B789EA063E(iLocal_97, joaat("script_task_leave_any_vehicle")) != 1)
						{
							unk_0x6FE9A0C01D25F413(iLocal_96, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_302)
	{
		case 0:
			unk_0x9FA372F8E6CA8083(iLocal_96, 0.916f);
			if (func_42(iLocal_97))
			{
				func_40(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), unk_0x30BE8A934C020461(iLocal_96, 0)) < 22500f)
			{
				func_38();
			}
			func_35(iLocal_98);
			if (func_33(iLocal_97))
			{
				func_11(&uLocal_122, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_perform_sequence")) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_302 = 3;
				}
			}
			break;
		
		case 3:
			func_96(15);
			break;
		
		case 5:
			func_96(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar2 = unk_0x0DB7F8294D73598B();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1()) / 1000f);
}

bool func_9(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0DCB385165FDE763())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_29();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, false);
			if (bParam2)
			{
				func_22();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (func_21())
				{
					return 0;
				}
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
					{
						return 0;
					}
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_20())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_19();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_18();
		func_13();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_13()
{
	if (!func_14())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_14()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_17())
	{
		return 0;
	}
	if (func_15(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	return func_16(iParam0, 20);
}

var func_16(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_17()
{
	return -1;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
}

void func_19()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x061B1200C95204CB(&Global_8254, 16);
}

int func_20()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC67B4044F323AEB2() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_22()
{
	if (func_552(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_23();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

int func_23()
{
	func_24();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_27(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_26(unk_0xC1A5EC5C986B98AD());
			if (func_25(iVar0) && (!func_552(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_25(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_31()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if ((unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

int func_33(int iParam0)
{
	if (func_34())
	{
		if (!unk_0x3C7B91AC97455235(unk_0x504B9BB48D41C264(iParam0), unk_0x30BE8A934C020461(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (Global_22761)
	{
		return 1;
	}
	return 0;
}

void func_35(int iParam0)
{
	if (iLocal_297 != 1 && iLocal_297 != 2)
	{
		return;
	}
	if (func_37())
	{
		func_36(&iParam0);
	}
}

void func_36(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xFBD273FDBCF0C5BD(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0x9E1A4BBC2E70DCFB(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_37()
{
	return unk_0x18D781E5FEB0E5E3(iLocal_96, 876132797);
}

void func_38()
{
	unk_0x063E0F2515867ED4();
	func_39();
}

void func_39()
{
	Global_23131.f_134 = 1;
}

void func_40(var uParam0)
{
	func_41(uParam0, 0f);
}

void func_41(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, true);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_42(int iParam0)
{
	if (unk_0x2AC37494BBF1DB16(sLocal_63))
	{
		sLocal_63 = func_50(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0x2BBF749E555360DC(sLocal_63))
	{
		return 0;
	}
	else
	{
		func_43(iLocal_96, func_49(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		if (iParam0 == unk_0xC1A5EC5C986B98AD())
		{
			func_43(iParam0, func_49(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		}
		func_492("anim_dict has loaded, triggering anims?");
		func_482(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x055111B11E6624FD(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x95DC39736F6748E3(iParam0, 1);
	if (!unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0x673F52632EDC33B7();
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) && func_48(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0xE831F5155505E3E0(4);
		}
	}
	bVar1 = func_47(iVar0);
	sVar2 = func_50(iParam0, 0, 0);
	if (!unk_0x2BBF749E555360DC(sVar2))
	{
		unk_0x28818732C8F0F80E(sVar2);
	}
	else
	{
		unk_0xDBC7406226B5540E(&uVar3);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_44(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_44(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_44(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_44(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_44(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uVar3);
		unk_0x3D7110D966B0CEA2(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x63EF69C6969A3D26(&uVar3);
		}
	}
}

char* func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(18);
					}
					else
					{
						sVar0 = func_46(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(8);
				}
				else
				{
					sVar0 = func_46(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(18);
				}
				else
				{
					sVar0 = func_45(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(8);
			}
			else
			{
				sVar0 = func_45(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(19);
					}
					else
					{
						sVar0 = func_46(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(9);
				}
				else
				{
					sVar0 = func_46(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(19);
				}
				else
				{
					sVar0 = func_45(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(9);
			}
			else
			{
				sVar0 = func_45(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(21);
					}
					else
					{
						sVar0 = func_46(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(11);
				}
				else
				{
					sVar0 = func_46(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(21);
				}
				else
				{
					sVar0 = func_45(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(11);
			}
			else
			{
				sVar0 = func_45(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(22);
					}
					else
					{
						sVar0 = func_46(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(12);
				}
				else
				{
					sVar0 = func_46(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(22);
				}
				else
				{
					sVar0 = func_45(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(12);
			}
			else
			{
				sVar0 = func_45(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_46(3);
				}
				else
				{
					sVar0 = func_46(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(3);
			}
			else
			{
				sVar0 = func_45(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_47(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_48(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x80A3F4E694565F6A(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x80A3F4E694565F6A(1) == 4;
		}
	}
	return bVar0;
}

bool func_49()
{
	return iLocal_297 == 0;
}

char* func_50(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		uVar0 = unk_0x95DC39736F6748E3(iParam0, 1);
		if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
		{
			if (func_47(iVar0))
			{
				if ((!func_48(0, 1) || iParam2) && !bParam1)
				{
					return func_54();
				}
				else
				{
					return func_53();
				}
			}
			else if (unk_0x504B9BB48D41C264(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_48(0, 1) || iParam2) && !bParam1)
	{
		return func_52();
	}
	return func_51();
}

char* func_51()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_55(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0xF276A75C8A36B189(iParam0) || !func_57(iParam0, iLocal_98, -1))
		{
			Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
			unk_0x474AA9EF29305EA8(iParam0, 196624, 1);
			if (func_56())
			{
				unk_0xCF302B47D4B347F1(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0x055111B11E6624FD(unk_0xD2A91DBF15D12CD1(iParam0), 0))
			{
				unk_0xCAC2B0C65B18E755(iParam0, unk_0xD2A91DBF15D12CD1(iParam0), 0, 16);
			}
			else
			{
				unk_0xCF302B47D4B347F1(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_56()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0) && !unk_0x055111B11E6624FD(iParam1, 0))
	{
		if (unk_0x44A6C9475C859B45(iParam0, iParam1))
		{
			if (unk_0xA66E176E5772E965(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_58(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x30BE8A934C020461(iLocal_96, 1) };
	Var3 = { Local_90 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var3.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var3.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var3.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var3.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var3.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var3.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var3.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var3.f_1 + 20f);
}

void func_59()
{
	if (!unk_0x66599E73DBA5A850(iLocal_97))
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_perform_sequence")) == 1)
				{
					if (unk_0xD64D855C3A010BF0(iLocal_96) > 0)
					{
						if (unk_0xE0D346789C5160EB(iLocal_96, iLocal_98, 0))
						{
							func_492("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xDBC7406226B5540E(&uLocal_101);
							unk_0xA6B22576A5268171(0, iLocal_98, 10f, 786603);
							unk_0xF2CFC6EC8C85FA78(uLocal_101);
							unk_0x3D7110D966B0CEA2(iLocal_97, uLocal_101);
							unk_0x63EF69C6969A3D26(&uLocal_101);
							Local_90 = { func_60(unk_0x30BE8A934C020461(iLocal_96, 1)) };
							unk_0x28818732C8F0F80E(func_50(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = unk_0xA5E11AF0A2B928C1();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xB7A628320EFF8E47(Param0, func_61(iVar1)) < unk_0xB7A628320EFF8E47(Param0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_62()
{
	float fVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_97))
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0xDC58AE028CB223BA(iLocal_98);
				if (unk_0xEAEF747543427AC5(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_69(iLocal_96);
					iLocal_65 = unk_0xA5E11AF0A2B928C1();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= iLocal_68)
					{
						if (func_551())
						{
							if (unk_0xB6B927AA8C3DAD36(iLocal_97))
							{
								unk_0x1F9F6C767BE640D5(iLocal_97);
							}
						}
						else
						{
							unk_0x1F9F6C767BE640D5(iLocal_97);
						}
						iLocal_68 = unk_0x15A88CFAAFFC6C4B(0, 10000);
						if (iLocal_68 > 2500)
						{
							unk_0x909F139DC199D8E0(iLocal_96);
							unk_0x63EF69C6969A3D26(&uLocal_101);
							unk_0xDBC7406226B5540E(&uLocal_101);
							unk_0xD30E9CAE1FEA1C7E(0, iLocal_98, -1, 0, 1f, 8388609, 0);
							unk_0x56FD1401249AC499(0, -1);
							unk_0xF2CFC6EC8C85FA78(uLocal_101);
							unk_0x3D7110D966B0CEA2(iLocal_96, uLocal_101);
							unk_0x63EF69C6969A3D26(&uLocal_101);
							func_492("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_68();
							func_63();
							if (!unk_0x66599E73DBA5A850(iLocal_97))
							{
								if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
								{
									if (unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
									{
										unk_0x63EF69C6969A3D26(&uLocal_101);
										unk_0xDBC7406226B5540E(&uLocal_101);
										unk_0x56FD1401249AC499(0, unk_0x15A88CFAAFFC6C4B(500, 2000));
										unk_0xA6B22576A5268171(0, iLocal_98, 10f, 786603);
										unk_0xF2CFC6EC8C85FA78(uLocal_101);
										unk_0x3D7110D966B0CEA2(iLocal_97, uLocal_101);
										unk_0x63EF69C6969A3D26(&uLocal_101);
										iLocal_64 = unk_0xA5E11AF0A2B928C1();
									}
								}
							}
							func_492("prostitute REFUSED MONEY 2");
							if (func_551())
							{
								if (unk_0xB6B927AA8C3DAD36(iLocal_97))
								{
									unk_0x1F9F6C767BE640D5(iLocal_97);
								}
							}
							else
							{
								unk_0x1F9F6C767BE640D5(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_551())
					{
						if (unk_0xB6B927AA8C3DAD36(iLocal_97))
						{
							unk_0x1F9F6C767BE640D5(iLocal_97);
						}
					}
					else
					{
						unk_0x1F9F6C767BE640D5(iLocal_97);
					}
					func_97();
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_551())
				{
					if (unk_0xB6B927AA8C3DAD36(iLocal_97))
					{
						unk_0x1F9F6C767BE640D5(iLocal_97);
					}
				}
				else
				{
					unk_0x1F9F6C767BE640D5(iLocal_97);
				}
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iLocal_96) || unk_0x66599E73DBA5A850(iLocal_96))
	{
		return 1;
	}
	if (!func_551())
	{
		if (unk_0x3C3D6D026CF7F51B(iLocal_96, 1))
		{
			unk_0x984708151807AC6D(iLocal_96, 1193033728, 0);
		}
		else if (func_491(iLocal_49, 4194304))
		{
			unk_0xDBC7406226B5540E(&uVar0);
			if (func_491(iLocal_75, 524288))
			{
				unk_0x3EE48ADC8C7F5CC4(0, func_67(iLocal_293), func_66(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_64(1);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(iLocal_96, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
			func_482(&iLocal_49, 16384);
			func_40(&uLocal_113);
		}
		return 1;
	}
	if (unk_0x3C3D6D026CF7F51B(iLocal_96, 1))
	{
		if (unk_0xB6B927AA8C3DAD36(iLocal_96))
		{
			unk_0x984708151807AC6D(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xBDB0FB8EEE50C9CD(iLocal_96);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_491(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_491(iLocal_75, 524288))
			{
				if (unk_0xB6B927AA8C3DAD36(iLocal_96))
				{
					unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xBDB0FB8EEE50C9CD(iLocal_96);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_491(iLocal_75, 524288))
			{
				if (unk_0xB6B927AA8C3DAD36(iLocal_96))
				{
					if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_play_anim")) == 7)
					{
						func_64(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xBDB0FB8EEE50C9CD(iLocal_96);
				}
			}
			else if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				func_64(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
			break;
		
		case 3:
			func_482(&iLocal_49, 16384);
			func_40(&uLocal_113);
			return 1;
			break;
	}
	return 0;
}

void func_64(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0xA239AFE8684C2BD1(iLocal_96) || unk_0x462D40DF014BDC2B(iLocal_96)) || unk_0x6ADCF24891BC416B(iLocal_96, func_65(0))) || unk_0x6ADCF24891BC416B(iLocal_96, func_65(1)))
	{
		return;
	}
	Var0 = { unk_0x30BE8A934C020461(iLocal_96, 1) };
	if (!unk_0x23AEDAC482996A1A(Var0, func_65(0), 20f, 1) && !unk_0x23AEDAC482996A1A(Var0, func_65(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x984708151807AC6D(0, 1193033728, 0);
		}
		else
		{
			unk_0x984708151807AC6D(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x978687517F88D889(iLocal_96, Var0, 20f, 0);
	}
	else
	{
		unk_0x978687517F88D889(0, Var0, 20f, 0);
	}
}

char* func_65(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(iLocal_96))
	{
		if (func_23() == 2)
		{
			unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_69(int iParam0)
{
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (func_70(iParam0))
		{
			unk_0x992BB708B4B7A005(iParam0, 109, 1);
		}
	}
}

int func_70(int iParam0)
{
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if ((unk_0x7BB3D8F4F6310EB8(iParam0, func_67(iLocal_293), func_66(1), 3) || unk_0x7BB3D8F4F6310EB8(iParam0, func_67(iLocal_293), func_66(2), 3)) || unk_0x7BB3D8F4F6310EB8(iParam0, func_67(iLocal_293), func_66(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	float fVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_97))
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_perform_sequence")) == 1)
				{
					if (unk_0xD64D855C3A010BF0(iLocal_96) > 1)
					{
						if (unk_0xEAEF747543427AC5(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0xDC58AE028CB223BA(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_72(0);
								iLocal_64 = unk_0xA5E11AF0A2B928C1();
								iLocal_68 = unk_0x15A88CFAAFFC6C4B(4000, 8000);
								func_492("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_492("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_551())
	{
		if (bParam0)
		{
			unk_0x322F7FE9728D7C84(iLocal_96, "PROSTITUTE_GROUP", 0);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (func_491(iLocal_49, 4194304))
		{
			iVar0 = unk_0x15A88CFAAFFC6C4B(1, 4);
			unk_0xDBC7406226B5540E(&uVar1);
			unk_0x3EE48ADC8C7F5CC4(0, func_67(iLocal_293), func_66(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, func_67(iLocal_293), func_66(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, func_67(iLocal_293), func_66(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uVar1);
			unk_0x3D7110D966B0CEA2(iLocal_96, uVar1);
			unk_0x63EF69C6969A3D26(&uVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x322F7FE9728D7C84(iLocal_96, "PROSTITUTE_GROUP", 0);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_491(iLocal_49, 4194304))
			{
				if (unk_0xB6B927AA8C3DAD36(iLocal_96))
				{
					unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xBDB0FB8EEE50C9CD(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_play_anim")) == 7)
				{
					iVar0 = unk_0x15A88CFAAFFC6C4B(1, 4);
					unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
			break;
		
		case 3:
			if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_play_anim")) == 7)
				{
					unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_73()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(iLocal_96))
	{
		switch (func_23())
		{
			case 0:
				if (!func_74(iLocal_96))
				{
					unk_0x824D23CC0FE1835A(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x824D23CC0FE1835A(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_74(iLocal_96))
				{
					unk_0x824D23CC0FE1835A(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x824D23CC0FE1835A(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_74(iLocal_96))
				{
					unk_0x824D23CC0FE1835A(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x824D23CC0FE1835A(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)
{
	if (func_76(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_23() == 0)
	{
		iVar0 = Global_113648.f_10051.f_1[iParam0 /*11*/][0];
	}
	else if (func_23() == 1)
	{
		iVar0 = Global_113648.f_10051.f_1[iParam0 /*11*/][1];
	}
	else if (func_23() == 2)
	{
		iVar0 = Global_113648.f_10051.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_76(iVar0) > 0)
			{
				if ((func_83(iParam0, iVar0) && func_79(iParam0, iVar0)) && func_78(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x7EDC47E12B94AA72(iParam0, Global_113648.f_10051.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_80(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_82(iParam2);
	return unk_0xEDEBC30DEBDF84C8(uParam0, uVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_113648.f_10051.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_82(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_84(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_84(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_86(iParam2);
	return unk_0xAC464F61BE9FD50D(uParam0, uVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_113648.f_10051.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_87(char* sParam0)
{
	if (!unk_0xD19C2C73F4D74992(sParam0))
	{
		unk_0xAEA29937C5240DA0(sParam0);
	}
}

void func_88()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	
	if (!unk_0x66599E73DBA5A850(iLocal_97))
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0xDC58AE028CB223BA(iLocal_98);
				if (unk_0xF5F493B789EA063E(iLocal_97, joaat("script_task_vehicle_park")) == 7 || fVar0 <= 1f)
				{
					unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iLocal_98), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0x7394CB479CCA24AF(iLocal_98, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0x7394CB479CCA24AF(iLocal_98, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0x30BE8A934C020461(iLocal_96, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0xDBC7406226B5540E(&uLocal_101);
					unk_0x7D9A648CC1936BDA(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x06A2A5F6A6959BE7(0, iLocal_97, 0);
					unk_0x56FD1401249AC499(0, -1);
					unk_0xF2CFC6EC8C85FA78(uLocal_101);
					unk_0x3D7110D966B0CEA2(iLocal_96, uLocal_101);
					unk_0x63EF69C6969A3D26(&uLocal_101);
					func_492("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_492("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()
{
	struct<3> Var0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_97))
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (unk_0xE0D346789C5160EB(iLocal_97, iLocal_98, 0))
			{
				if (func_91(&iLocal_98))
				{
					if (func_90(unk_0x30BE8A934C020461(iLocal_97, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0x30BE8A934C020461(iLocal_96, 1) };
					if (unk_0xF1CA6F0B30994085(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0x3633513A43FCDD86(iLocal_97, 1f);
						unk_0xFBDBD4F789EA1BE1(iLocal_97, 0.2f);
						unk_0x7B1022A1C04184B3(iLocal_97, 0.05f);
						unk_0x267F4694BB0C680B(iLocal_97, iLocal_98, Var0, 0f, 3, 360f, 1);
						unk_0xEDB03CCB50D11479(iLocal_97, iLocal_96, -1, 2048, 4);
						func_492("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_492("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_96(15);
	}
}

bool func_90(struct<3> Param0, int iParam3)
{
	if (func_551())
	{
		return unk_0x06EADAF3FF0C6092(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0x7419F07EFCC23990(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0x06EADAF3FF0C6092(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFBD273FDBCF0C5BD(*iParam0, 0))
	{
		iVar0 = unk_0x504B9BB48D41C264(*iParam0);
		if (func_94(iVar0, 0) && func_93(*iParam0))
		{
			if (unk_0x2E240694D642679A(*iParam0) > 0)
			{
				iVar1 = unk_0x94365836BD1EA548(*iParam0, 0, 1);
				if (((iVar1 == 0 && unk_0x9CFCDD9C62B56708(*iParam0, 0, 0)) && (!unk_0x42BECCBCE4CA667A(*iParam0, 1) && !unk_0x42BECCBCE4CA667A(*iParam0, 0))) || unk_0xA66E176E5772E965(*iParam0, 0, 0) == iLocal_96)
				{
					if (func_47(*iParam0))
					{
						if (!func_491(iLocal_49, 32768))
						{
							func_482(&iLocal_49, 32768);
							if (!func_491(iLocal_49, 8))
							{
								unk_0x14004648CB41E983(func_92());
								func_482(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_491(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_491(iLocal_49, 8))
						{
							if (unk_0xA6FA26A80B445074(func_92()))
							{
								unk_0x1401DAE4BB7FBFCD(func_92());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_92()
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x6BDF27AD591C4E31(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xCA36A30E79A35222(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x37FCEA2DC5D0CAE5(iParam0, iVar1, unk_0xCA36A30E79A35222(iParam0, iVar1)), 16);
						iVar2 = unk_0x14580F20CBCE4FA9(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x14580F20CBCE4FA9("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x504B9BB48D41C264(iParam0))
		{
			case joaat("peyote2"):
				if ((!unk_0x175FDAC9EB940479(iParam0, 2) && !unk_0x175FDAC9EB940479(iParam0, 3)) && !unk_0x175FDAC9EB940479(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!unk_0x175FDAC9EB940479(iParam0, 2) && !unk_0x175FDAC9EB940479(iParam0, 3)) && !unk_0x175FDAC9EB940479(iParam0, 4)) && !unk_0x175FDAC9EB940479(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!unk_0x175FDAC9EB940479(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0xCA36A30E79A35222(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (unk_0x175FDAC9EB940479(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (unk_0xCA36A30E79A35222(iParam0, 10) == -1 || unk_0xCA36A30E79A35222(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
			
			case 1748565021:
				if (unk_0xCA36A30E79A35222(iParam0, 10) == 0)
				{
					return 0;
				}
				break;
		}
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
				return 1;
				break;
		}
		if (unk_0x55271CC5190810F6(iParam0) == 931866387 && unk_0x504B9BB48D41C264(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((unk_0x55271CC5190810F6(iParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x504B9BB48D41C264(iParam0) == joaat("weevil")) || unk_0x504B9BB48D41C264(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (unk_0x55271CC5190810F6(iParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x504B9BB48D41C264(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0, bool bParam1)
{
	if ((((unk_0x6123E78FD4B274FB(iParam0) || unk_0xAF4434A9F7368F35(iParam0)) || unk_0x2D92D1084D213DC4(iParam0)) || unk_0xF71BABB2940158F7(iParam0)) || unk_0x6CEF99E452573979(iParam0))
	{
		return 0;
	}
	if (func_95(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722"))
	{
		return 0;
	}
	return 1;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_96(int iParam0)
{
	iLocal_295 = iParam0;
}

void func_97()
{
	if (func_551())
	{
		if (unk_0xB6B927AA8C3DAD36(iLocal_96))
		{
			unk_0x909F139DC199D8E0(iLocal_96);
			unk_0x1F9F6C767BE640D5(iLocal_96);
		}
	}
	else
	{
		unk_0x909F139DC199D8E0(iLocal_96);
		unk_0x1F9F6C767BE640D5(iLocal_96);
	}
	iLocal_97 = 0;
	iLocal_98 = 0;
	unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(4), 2f, -2f, -1, 1, unk_0xD88C7A93096DA0F7(0f, 0.9f), 0, 0, 0);
	func_96(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
}

void func_98(var uParam0)
{
	if (!func_491(iLocal_49, 32))
	{
		iLocal_294 = 1;
	}
	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_491(iLocal_49, 33554432))
		{
			if (func_551())
			{
				if (Global_1926703 || func_474())
				{
					func_473(0);
					func_482(&iLocal_49, 33554432);
				}
			}
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
			{
				if (func_491(iLocal_49, 1048576) || func_491(iLocal_49, 8192))
				{
					func_473(0);
					func_482(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_295)
	{
		case 0:
			if (func_491(iLocal_49, 16384) || func_491(iLocal_49, 8388608))
			{
				if (!func_10(&uLocal_113))
				{
					func_472(&uLocal_113);
				}
				if (func_471(&uLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_470("PROS_NO_MONEY"))
			{
				func_64(0);
				switch (func_23())
				{
					case 0:
						func_469(&uLocal_122, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_469(&uLocal_122, 0, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_469(&uLocal_122, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
						break;
				}
				iLocal_295 = 1;
			}
			else
			{
				func_468();
				iLocal_296 = 2;
			}
			break;
		
		case 1:
			func_455(uParam0);
			break;
		
		case 2:
			func_442(uParam0);
			break;
		
		case 3:
			func_441();
			break;
		
		case 4:
			func_429(uParam0);
			break;
		
		case 5:
			func_411();
			break;
		
		case 6:
			func_410(uParam0);
			break;
		
		case 7:
			func_389();
			func_381();
			break;
		
		case 8:
			func_378();
			unk_0x8B438725D591ED78(0, 80, 1);
			unk_0x8B438725D591ED78(0, 0, 1);
			unk_0x693E3DB45F359B4D(unk_0x93E99A2DBCBA9CFA(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			if (func_551())
			{
				func_226(uParam0);
			}
			break;
		
		case 9:
			func_223();
			break;
		
		case 10:
			func_220();
			break;
		
		case 11:
			unk_0x693E3DB45F359B4D(unk_0x93E99A2DBCBA9CFA(), 0);
			unk_0x8B438725D591ED78(0, 0, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
			if (func_551())
			{
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 433, 1);
				func_226(uParam0);
			}
			break;
		
		case 12:
			func_490();
			break;
		
		case 13:
			unk_0x8B438725D591ED78(0, 80, 1);
			unk_0x8B438725D591ED78(0, 0, 1);
			func_103();
			break;
		
		case 14:
			func_102();
			break;
		
		case 15:
			unk_0x8B438725D591ED78(0, 80, 1);
			unk_0x8B438725D591ED78(0, 0, 1);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)
{
	if (!func_551())
	{
		if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_101(1), 3))
		{
			return;
		}
	}
	if (func_491(iLocal_49, 16))
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_491(iLocal_49, 2))
	{
		func_100(1);
		func_492("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_542();
	if (func_551())
	{
		func_536(uParam0);
	}
}

void func_100(int iParam0)
{
}

var func_101(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(6);
		}
		else
		{
			return func_45(7);
		}
	}
	if (bParam0)
	{
		return func_46(6);
	}
	return func_46(7);
}

void func_102()
{
	if (!unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
	{
		if (iLocal_72 == 0)
		{
			if (func_491(iLocal_49, 134217728))
			{
				unk_0x474AA9EF29305EA8(iLocal_96, 32768, 0);
				unk_0x474AA9EF29305EA8(iLocal_96, 196624, 1);
			}
			unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}
}

void func_103()
{
	switch (iLocal_303)
	{
		case 0:
			if (!unk_0x70ACD9400516DB25(iLocal_96) || func_121(&uLocal_107) > 4f)
			{
				func_116(iLocal_96);
				if (func_76(func_77(iLocal_96)) == 1)
				{
					iLocal_303 = 2;
				}
				else
				{
					func_115(&uLocal_107);
					func_114("PROS_RESPONSE");
					iLocal_303 = 1;
				}
			}
			break;
		
		case 1:
			func_113();
			if (unk_0x70ACD9400516DB25(iLocal_96) || func_112())
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 256);
				func_482(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&uLocal_107))
				{
					func_40(&uLocal_107);
				}
				if (func_121(&uLocal_107) > 15f || iLocal_306 != 0)
				{
					unk_0xCD3C8E1022864F65(1);
					func_111();
					iLocal_303 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_112())
			{
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			func_106(0);
			func_104();
			func_96(15);
			break;
	}
}

int func_104()
{
	if (func_105(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_105(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_106(bool bParam0)
{
	if (!unk_0x66599E73DBA5A850(iLocal_96))
	{
		if (unk_0x72474BA05A104E1E())
		{
			unk_0xE9C250FA35A936C8(&iLocal_96);
		}
		else
		{
			func_107(iLocal_96, bParam0);
		}
	}
}

void func_107(int iParam0, bool bParam1)
{
	var uVar0;
	float fVar1;
	
	if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_110(1), 3))
	{
		unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_101(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (func_551())
		{
			if (unk_0xB6B927AA8C3DAD36(iParam0))
			{
				unk_0x3088EBAF25E87109(iParam0);
			}
		}
		else
		{
			unk_0x3088EBAF25E87109(iParam0);
		}
		if (func_491(iLocal_49, 33554432))
		{
			unk_0x909F139DC199D8E0(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0xD88C7A93096DA0F7(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_482(&iLocal_49, 134217728);
			}
		}
		if (func_491(iLocal_49, 134217728))
		{
			unk_0x474AA9EF29305EA8(iParam0, 32768, 1);
			unk_0xC6C9BF71106ABCAC(iParam0, unk_0xC1A5EC5C986B98AD(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0x474AA9EF29305EA8(iParam0, 196624, 1);
			unk_0x63EF69C6969A3D26(&uVar0);
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x82C6DD5E8460E2C0(0, 1);
			if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
			{
				if (!unk_0xF193A4B306E6BF93(unk_0x95DC39736F6748E3(iParam0, 0)))
				{
					func_109(iParam0, 1);
				}
				else
				{
					if (unk_0x7BB3D8F4F6310EB8(iParam0, func_50(iParam0, 0, 0), func_110(0), 3))
					{
						if (iLocal_72 > 0)
						{
							unk_0x3EE48ADC8C7F5CC4(0, func_50(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x3EE48ADC8C7F5CC4(0, func_50(iParam0, 0, 0), func_108(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_109(iParam0, 1);
				}
			}
			unk_0x82C6DD5E8460E2C0(0, 0);
			unk_0x984708151807AC6D(0, 1193033728, 0);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(iParam0, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
		if (func_551())
		{
			if (unk_0x9153FB897534EB0D(iLocal_96))
			{
				if (unk_0xDD2D9A241E18E942(unk_0x1CFC8878ACB6B610(iLocal_96)))
				{
					unk_0x71A535529C1CA5DF(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0x71A535529C1CA5DF(iParam0, 1);
		}
	}
}

var func_108(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(4);
		}
		else
		{
			return func_45(5);
		}
	}
	if (bParam0)
	{
		return func_46(4);
	}
	return func_46(5);
}

void func_109(int iParam0, int iParam1)
{
	if (!unk_0x73D13C05CA29773A(uParam0, unk_0x95DC39736F6748E3(uParam0, 0), 0, 0, 0))
	{
		unk_0x6FE9A0C01D25F413(0, 0, 16842752);
	}
	else
	{
		unk_0x6FE9A0C01D25F413(0, 0, iParam1);
	}
}

var func_110(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(2);
		}
		else
		{
			return func_45(3);
		}
	}
	if (bParam0)
	{
		return func_46(2);
	}
	return func_46(3);
}

void func_111()
{
	int iVar0;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_112()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	if (iLocal_306 == 0)
	{
		unk_0xEF54B7007CB2210B(0);
		unk_0x8B438725D591ED78(0, 99, 1);
		unk_0x8B438725D591ED78(0, 76, 1);
		unk_0x8B438725D591ED78(0, 80, 1);
		unk_0x4150CF46B891FFF5(2, 203);
		unk_0x4150CF46B891FFF5(2, 201);
		unk_0x4150CF46B891FFF5(2, 202);
		if (unk_0x6BD2D66249562506(2, 203))
		{
			unk_0xCD3C8E1022864F65(1);
			unk_0x531D638530A8DB97(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (unk_0x6BD2D66249562506(2, 201))
		{
			unk_0xCD3C8E1022864F65(1);
			unk_0x531D638530A8DB97(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (unk_0x6BD2D66249562506(2, 202))
		{
			unk_0xCD3C8E1022864F65(1);
			unk_0x531D638530A8DB97(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_114(char* sParam0)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

void func_115(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0x70ACD9400516DB25(iParam0))
		{
			unk_0x90B639B1CCB1446C(iParam0);
		}
		if (!unk_0x70ACD9400516DB25(iParam0))
		{
			func_118(iParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_122, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		func_120(&uLocal_122, 4);
		func_469(&uLocal_122, 6, iParam0, func_119(iVar0), 0, 1);
	}
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_120(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_121(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_122(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_551())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar1 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x7DE17ACDD8BA2642(iVar1))
			{
				if (unk_0xA66E176E5772E965(iVar1, -1, 0) != unk_0xC1A5EC5C986B98AD())
				{
					bVar0 = true;
				}
				if (unk_0xA66E176E5772E965(iVar1, 0, 0) != iLocal_96)
				{
					bVar0 = true;
				}
				if (unk_0x94365836BD1EA548(iVar1, 0, 1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_123(0);
					unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { unk_0x000D018EA42688BA(iLocal_99, 2) };
		unk_0xAABD7B0753C5C286(180f);
		unk_0xEAB390443C680F72((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
	func_124(&(Local_313[0 /*7*/]));
	func_124(&(Local_313[3 /*7*/]));
	func_124(&(Local_313[2 /*7*/]));
	func_124(&(Local_313[1 /*7*/]));
	if (func_470("PROS_CAM_TOG") || func_470("PROS_CAM_OC"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
}

void func_124(var uParam0)
{
	if (unk_0xF57C1326FD40C8A7(*uParam0))
	{
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		if (unk_0x2DDFF72E939527F8(*uParam0))
		{
			unk_0xEEF11E0DB5769366(*uParam0, 0);
		}
		unk_0x42B9FA814615C4F9(*uParam0, 0);
	}
}

void func_125()
{
	if (unk_0xFBD273FDBCF0C5BD(iLocal_99, 0))
	{
		unk_0x8BF6543953125AB4(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_219(iLocal_76) && !func_219(iLocal_77)) && !func_219(iLocal_78)) && !func_219(iLocal_79)) && !func_219(iLocal_80)) && !func_219(iLocal_81)) && !func_219(iLocal_82))
		{
			if (!unk_0xACD39355028D39EF(iLocal_96) || unk_0x603C398B47455767(unk_0xC1A5EC5C986B98AD()))
			{
				iLocal_302 = 5;
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (!unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	unk_0xEDECDDE17C1E41F5(2);
	unk_0x8B438725D591ED78(2, 19, 1);
	unk_0x8B438725D591ED78(2, 37, 1);
	func_213(0);
	switch (iLocal_302)
	{
		case 0:
			if (func_551())
			{
				func_210(1089, -1);
			}
			func_40(&uLocal_119);
			func_209(func_49(), func_491(iLocal_49, 32768));
			iLocal_302 = 1;
			func_492("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x8B438725D591ED78(0, 48, 1);
			unk_0x8B438725D591ED78(0, 0, 1);
			func_202();
			func_195();
			func_134();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_72 >= 3)
					{
						func_130();
						iLocal_302 = 5;
					}
					else
					{
						func_129();
						unk_0xE831F5155505E3E0(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x8B438725D591ED78(0, 48, 1);
			func_202();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_48(0, 1))
			{
				unk_0x8B438725D591ED78(0, 0, 1);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_72 = 3;
					if (iLocal_72 >= 3)
					{
						func_130();
						iLocal_302 = 5;
						func_115(&uLocal_104);
					}
				}
			}
			break;
		
		case 3:
			unk_0x8B438725D591ED78(0, 0, 1);
			if (!unk_0x70ACD9400516DB25(iLocal_96))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_128();
				unk_0xE831F5155505E3E0(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			unk_0x8B438725D591ED78(0, 0, 1);
			if (!unk_0x70ACD9400516DB25(iLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_127(iLocal_96))
					{
						func_126();
					}
					else
					{
						func_473(0);
					}
				}
				else
				{
					func_492("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_473(1);
				}
			}
			break;
	}
}

void func_126()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
	{
		if (iLocal_72 == 0)
		{
			unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(iLocal_96))
		{
			func_40(&uLocal_107);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 768);
			func_482(&iLocal_49, 2048);
			iLocal_295 = 13;
		}
	}
}

bool func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_76(iVar0) < 6;
}

void func_128()
{
	if (!Global_2672505.f_946.f_10)
	{
		Global_2672505.f_946.f_10 = 1;
	}
}

void func_129()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(iLocal_96))
	{
		unk_0x824D23CC0FE1835A(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_130()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(iLocal_96))
	{
		unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_131(char* sParam0)
{
	if (unk_0xD19C2C73F4D74992(sParam0))
	{
		unk_0x3FA8C73B5856A3E4(sParam0);
	}
}

int func_132()
{
	if (iLocal_305 == 6)
	{
		return 1;
	}
	return 0;
}

void func_133()
{
	unk_0x4B6E5EEB2496720E();
	unk_0x5CF66007BE4ACC41();
}

void func_134()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x2AC37494BBF1DB16(func_50(unk_0xC1A5EC5C986B98AD(), 0, 0)))
	{
		return;
	}
	if (!unk_0x2BBF749E555360DC(func_50(unk_0xC1A5EC5C986B98AD(), 0, 0)))
	{
		return;
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
	}
	bVar1 = func_49();
	bVar2 = func_491(iLocal_49, 32768);
	if (!func_48(0, 1))
	{
		func_189(&iLocal_83);
	}
	unk_0x8B438725D591ED78(2, 19, 1);
	unk_0x8B438725D591ED78(2, 37, 1);
	func_188(23, 1);
	switch (iLocal_305)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_48(0, 1))
			{
				func_183(&iLocal_83);
			}
			func_182(iLocal_96, 0);
			if (!func_551())
			{
				func_181(bVar1, bVar2);
			}
			func_180(bVar1, bVar2);
			iLocal_305 = 1;
			break;
		
		case 1:
			func_179(iLocal_76);
			if (func_219(iLocal_77))
			{
				if (!func_491(iLocal_50, 4))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_77) >= fVar0)
					{
						func_482(&iLocal_50, 4);
					}
				}
			}
			if (func_219(iLocal_76))
			{
				if (!func_491(iLocal_50, 8))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_76) >= fVar0)
					{
						func_482(&iLocal_50, 8);
					}
				}
			}
			if (func_491(iLocal_50, 4) && func_491(iLocal_50, 8))
			{
				if (!func_551())
				{
					func_177(bVar1, bVar2);
				}
				func_176(bVar1, bVar2);
				iLocal_305 = 2;
			}
			break;
		
		case 2:
			func_179(iLocal_78);
			if (func_219(iLocal_78))
			{
				if (!func_491(iLocal_50, 16))
				{
					if (!func_551())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_78) >= fVar0)
					{
						func_482(&iLocal_50, 16);
					}
				}
			}
			if (func_491(iLocal_50, 16))
			{
				if (!func_551())
				{
					func_175(bVar1, bVar2);
				}
				func_174(bVar1, bVar2);
				iLocal_305 = 3;
			}
			break;
		
		case 3:
			func_179(iLocal_79);
			if (func_219(iLocal_79))
			{
				if (!func_491(iLocal_50, 64))
				{
					if (!func_491(iLocal_49, 16777216))
					{
						if (!func_551())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_79) >= fVar0)
						{
							func_482(&iLocal_49, 16777216);
							iLocal_73++;
						}
					}
					else
					{
						if (!func_551())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_79) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_73 >= func_167(func_551(), func_173(), func_168()))
					{
						func_482(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_491(iLocal_50, 64))
			{
				func_482(&iLocal_50, 64);
			}
			if (func_491(iLocal_50, 64))
			{
				if (!func_551())
				{
					func_166(bVar1, bVar2);
				}
				func_165(bVar1, bVar2);
				iLocal_305 = 4;
			}
			break;
		
		case 4:
			func_179(iLocal_80);
			if (func_219(iLocal_80))
			{
				if (!func_491(iLocal_50, 256))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_80) >= fVar0)
					{
						func_482(&iLocal_50, 256);
					}
				}
			}
			else if (!func_491(iLocal_50, 256))
			{
				func_482(&iLocal_50, 256);
			}
			if (func_491(iLocal_50, 256))
			{
				if (!func_551())
				{
					func_159(bVar1, bVar2);
				}
				func_157(bVar1, bVar2);
				iLocal_305 = 5;
			}
			break;
		
		case 5:
			func_179(iLocal_81);
			if (func_219(iLocal_81))
			{
				if (!func_491(iLocal_50, 1024))
				{
					if (!func_551())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_81) >= fVar0)
					{
						func_482(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_491(iLocal_50, 1024))
			{
				func_482(&iLocal_50, 1024);
			}
			if (func_219(iLocal_82))
			{
				if (!func_491(iLocal_50, 2048))
				{
					if (!func_551())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_82) >= fVar0)
					{
						func_482(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_491(iLocal_50, 2048))
			{
				func_482(&iLocal_50, 2048);
			}
			if (func_491(iLocal_50, 1024) && func_491(iLocal_50, 2048))
			{
				func_182(iLocal_96, 0);
				unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(iLocal_305, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_182(unk_0xC1A5EC5C986B98AD(), -1);
				unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(iLocal_305, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_123(1);
				iLocal_50 = 0;
				iLocal_73 = 0;
				iLocal_61 = 0;
				func_135();
				iLocal_305 = 6;
			}
			break;
	}
}

void func_135()
{
	int iVar0;
	
	if (iLocal_72 == 0 && !func_551())
	{
		if (func_26(unk_0xC1A5EC5C986B98AD()) == 0)
		{
			func_156();
		}
		func_151(296, 0, 0);
		iVar0 = func_77(iLocal_96);
		if (iVar0 > -1)
		{
			func_150(iVar0);
		}
		else
		{
			func_142(iLocal_96);
		}
	}
	iLocal_72++;
	func_136();
}

void func_136()
{
	switch (func_26(unk_0xC1A5EC5C986B98AD()))
	{
		case 0:
			Global_113648.f_10051.f_90[0]++;
			func_137(0, 1, 1);
			break;
		
		case 1:
			Global_113648.f_10051.f_90[1]++;
			func_137(1, 1, 1);
			break;
		
		case 2:
			Global_113648.f_10051.f_90[2]++;
			func_137(2, 1, 1);
			break;
		
		case 3:
			func_137(3, 1, 1);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14192;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14192)
			{
				iVar0 = func_141(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_138(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_140();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_140()
{
	return Global_1574918;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_139(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x055111B11E6624FD(iParam0, 0))
	{
		return;
	}
	iVar0 = func_149();
	if (iVar0 == -1)
	{
		return;
	}
	func_150(iVar0);
	unk_0x260A70C42FAA4EDC(iParam0, func_147(iVar0));
	Global_113648.f_10051.f_1[iVar0 /*11*/].f_10 = unk_0x504B9BB48D41C264(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_146(iParam0, iVar1);
		func_145(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_144(iParam0, iVar4);
		func_143(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_113648.f_10051.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_144(int iParam0, int iParam1)
{
	return unk_0xEDEBC30DEBDF84C8(iParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_113648.f_10051.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_146(int iParam0, int iParam1)
{
	return unk_0xAC464F61BE9FD50D(iParam0, func_86(iParam1));
}

var func_147(int iParam0)
{
	return func_148(iParam0);
}

char* func_148(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_76(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_150(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_23() == 0)
		{
			Global_113648.f_10051.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_23() == 1)
		{
			Global_113648.f_10051.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_23() == 2)
		{
			Global_113648.f_10051.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_155((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_152();
	}
}

void func_152()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_available"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x683F4BAF21D6EE25(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_154(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_153() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_104();
				}
			}
		}
	}
}

int func_153()
{
	return Global_32163;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_140();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_97143[iVar0] = Global_97143[iVar0 + 1];
		}
		else
		{
			Global_97143[iVar0] = unk_0xA5E11AF0A2B928C1();
		}
		iVar0++;
	}
}

void func_157(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_96, iLocal_81, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xC1A5EC5C986B98AD(), iLocal_82, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_158(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_551())
	{
		unk_0x16410571CFB5ED71(iParam1);
	}
	else
	{
		unk_0x468D976993BF7FE1(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_81, 1, 0, 0);
	func_160(iLocal_96, iLocal_81, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(&iLocal_82, 0, 0, 0);
	func_160(unk_0xC1A5EC5C986B98AD(), iLocal_82, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_551())
	{
		unk_0xA499ADFC7EB2E4DB(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_164(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_163(*iParam0, iLocal_99, unk_0xD854D152961C41A9(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_163(*iParam0, iLocal_99, unk_0xD854D152961C41A9(iLocal_99, "seat_pside_f"));
	}
	func_162(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_162(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_551())
	{
		unk_0x60BEAF74138478D8(uParam0, Param1, Param4, iParam7);
	}
}

void func_163(var uParam0, int iParam1, var uParam2)
{
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
		return;
	}
	if (func_551())
	{
		unk_0xDE0A6A621DC95D72(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0xA87ED500F56EB698(uParam0, iParam1, uParam2);
	}
}

var func_164(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	
	if (func_551())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = unk_0x62E15BEBEB67DC6D(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0x191673E3F99212B2(Param0, Param3, iParam8);
		unk_0xE4E4F775E5660E56(uVar0, bParam6);
		unk_0x5F243F8265BB664F(uVar0, iParam7);
	}
	return uVar0;
}

void func_165(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_96, iLocal_80, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xC1A5EC5C986B98AD(), iLocal_80, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_166(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_80, 0, 0, 1);
	func_160(iLocal_96, iLocal_80, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0xC1A5EC5C986B98AD(), iLocal_80, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_167(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_169()
{
	if (func_551())
	{
		return func_141(65, -1, 0);
	}
	return func_170(func_26(unk_0xC1A5EC5C986B98AD()), 1);
}

var func_170(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0, iParam1);
	unk_0xDD7756E2742E0F6D(iVar1, &uVar0, -1);
	return uVar0;
}

var func_171(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_172(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_173()
{
	int iVar0;
	
	if (iLocal_297 != 0)
	{
		if (iLocal_61 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_61 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_61 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_61 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_96, iLocal_79, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xC1A5EC5C986B98AD(), iLocal_79, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_175(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_79, 0, 1, 0);
	func_160(iLocal_96, iLocal_79, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_160(unk_0xC1A5EC5C986B98AD(), iLocal_79, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_96, iLocal_78, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0xC1A5EC5C986B98AD(), iLocal_78, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_78, 0, 0, 1);
	func_160(iLocal_96, iLocal_78, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0xC1A5EC5C986B98AD(), iLocal_78, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_178(int iParam0)
{
	var uVar0;
	
	if (func_551())
	{
		uVar0 = unk_0xABF98B1999FE64CA(unk_0x7E80728A2E77D8E8(iParam0));
	}
	else
	{
		uVar0 = unk_0xABF98B1999FE64CA(iParam0);
	}
	return uVar0;
}

void func_179(int iParam0)
{
	if (!func_219(iParam0))
	{
		return;
	}
}

void func_180(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_96, iLocal_76, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_158(unk_0xC1A5EC5C986B98AD(), iLocal_77, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_181(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_76, 1, 0, 1);
	func_160(iLocal_96, iLocal_76, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_161(&iLocal_77, 0, 0, 1);
	func_160(unk_0xC1A5EC5C986B98AD(), iLocal_77, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_44(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_182(int iParam0, int iParam1)
{
	if (!unk_0xE0D346789C5160EB(iParam0, iLocal_99, 0))
	{
		if (!func_551())
		{
			unk_0x4C18E9202CF6CACA(iParam0, iLocal_99, iParam1);
		}
		else if (!unk_0xE0D346789C5160EB(iParam0, iLocal_99, 0))
		{
			unk_0xD30E9CAE1FEA1C7E(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_183(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = func_185(func_186(2), unk_0x3C289AF334341CC6(iLocal_99, unk_0xD854D152961C41A9(iLocal_99, "windscreen")));
	uVar1 = func_185(func_186(1), unk_0x3C289AF334341CC6(iLocal_99, unk_0xD854D152961C41A9(iLocal_99, "windscreen")));
	Var2 = { unk_0x000D018EA42688BA(iLocal_99, 2) };
	fVar5 = unk_0xD850DD08D5434072(iLocal_99);
	if (fVar5 >= 180f)
	{
		fVar6 = (fVar5 - 180f);
	}
	else
	{
		fVar6 = (fVar5 + 180f);
	}
	fVar7 = (-7f - Var2.f_1);
	fVar8 = (-5f - Var2.f_0);
	fVar9 = (-2.5f + Var2.f_0);
	fVar10 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!unk_0xF57C1326FD40C8A7(Local_313[2 /*7*/]))
	{
		func_184(&(Local_313[2 /*7*/]), func_186(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0xF57C1326FD40C8A7(Local_313[1 /*7*/]))
	{
		func_184(&(Local_313[1 /*7*/]), func_186(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0xF57C1326FD40C8A7(Local_313[0 /*7*/]))
	{
		func_184(&(Local_313[0 /*7*/]), func_186(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0xF57C1326FD40C8A7(Local_313[3 /*7*/]))
	{
		func_184(&(Local_313[3 /*7*/]), func_186(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
	unk_0xEEF11E0DB5769366(Local_313[*iParam0 /*7*/], 1);
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0xEEF11E0DB5769366(*uParam0, 1);
	unk_0xCE4412DC4B679860(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
}

var func_185(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_186(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x055111B11E6624FD(iLocal_96, 0))
	{
	}
	if (!unk_0xFBD273FDBCF0C5BD(iLocal_99, 0))
	{
	}
	unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iLocal_99), &uVar3, &Var6);
	Var9 = { unk_0x3C289AF334341CC6(iLocal_99, unk_0xD854D152961C41A9(iLocal_99, "windscreen")) };
	Var12 = { unk_0x5DC36ABEC3A264E9(iLocal_99, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0x7394CB479CCA24AF(iLocal_99, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0x7394CB479CCA24AF(iLocal_99, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0x7394CB479CCA24AF(iLocal_99, -3.7f, 0.7f, Var12.f_2) };
			break;
		
		case 3:
			Var0 = { func_187() };
			break;
	}
	return Var0;
}

Vector3 func_187()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<2> Var6;
	var uVar9;
	
	unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iLocal_99), &Var6, &uVar9);
	Var0 = { unk_0x3C289AF334341CC6(iLocal_99, unk_0xD854D152961C41A9(iLocal_99, "windscreen")) };
	Var3 = { unk_0x5DC36ABEC3A264E9(iLocal_99, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0x7394CB479CCA24AF(iLocal_99, 0f, -unk_0x2655A8EC638E4FD1(Var6.f_1), Var3.f_2);
}

void func_188(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_32412, iParam0);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_32412, bParam0);
	}
}

void func_189(int iParam0)
{
	if (!unk_0xF57C1326FD40C8A7(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0x0097C56F4031898F(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0xA490483DCDA2F37E(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xFEE065E56A9BEF3F())
	{
		func_192(&(Local_313[*iParam0 /*7*/]));
	}
	if (func_191())
	{
		if (!func_551())
		{
			if (!func_470("PROS_CAM_OC"))
			{
				func_114("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_551())
		{
			if (!func_470("PROS_CAM_TOG"))
			{
				func_114("PROS_CAM_TOG");
			}
		}
		if ((unk_0xE665ABCFC5784C35(2, 0) && !unk_0xFEE065E56A9BEF3F()) && !func_48(0, 1))
		{
			func_190(iParam0);
			unk_0xEEF11E0DB5769366(Local_313[*iParam0 /*7*/], 1);
		}
	}
}

void func_190(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_491(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_491(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_491(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_191()
{
	if ((func_491(iLocal_51, 16) && func_491(iLocal_51, 64)) && func_491(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_192(var uParam0)
{
	var uVar0[4];
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	
	unk_0x13EB202976B3AAE2(2);
	func_194(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0xEDE44CE789C14F9F())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0x42AAFCB5B7854AA9(0))
	{
		uParam0->f_4 = func_193((uParam0->f_4 + (Var9.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_193((uParam0->f_4.f_1 + (Var9.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_193((uParam0->f_4.f_2 + (Var9.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_193((((Var9.f_0 - uParam0->f_4) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_193((((Var9.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_193((((Var9.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar8), -3f, 3f));
	}
	unk_0xB346B70AE8C42AD8(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_193(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xB378DD9B62D26EF3(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 218) * 127f));
		}
		if (!unk_0xB378DD9B62D26EF3(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 219) * 127f));
		}
		if (!unk_0xB378DD9B62D26EF3(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 220) * 127f));
		}
		if (!unk_0xB378DD9B62D26EF3(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 221) * 127f));
		}
	}
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (bParam5)
		{
			if (unk_0xEDE44CE789C14F9F())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA12842DEAE51AADE())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_195()
{
	int iVar0;
	float fVar1;
	
	if (!func_200())
	{
		if (func_199(iLocal_96))
		{
			if (!func_491(iLocal_49, 256))
			{
				unk_0x90B639B1CCB1446C(unk_0xC1A5EC5C986B98AD());
				unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_551())
					{
						unk_0x897AEFEA34B3B29A(unk_0x93E99A2DBCBA9CFA(), 15, 1, 0);
					}
					unk_0xCA9F34C06A0529CE(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_551())
					{
						unk_0x897AEFEA34B3B29A(unk_0x93E99A2DBCBA9CFA(), 10, 1, 0);
					}
					unk_0xCA9F34C06A0529CE(0, 4000, 210);
				}
				else
				{
					if (!func_551())
					{
						unk_0x897AEFEA34B3B29A(unk_0x93E99A2DBCBA9CFA(), 5, 1, 0);
					}
					unk_0xCA9F34C06A0529CE(0, 3000, 168);
				}
				func_482(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (unk_0x18D781E5FEB0E5E3(iLocal_96, 876132797))
				{
					unk_0xCA9F34C06A0529CE(0, 200, 84);
					unk_0x9E1A4BBC2E70DCFB(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_197();
				}
				break;
			
			case 1:
			case 2:
				if (func_491(iLocal_49, 32768))
				{
					if (func_551())
					{
						iVar0 = unk_0x7E80728A2E77D8E8(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (unk_0x411B750250543BD0(iVar0))
					{
						fVar1 = unk_0xABF98B1999FE64CA(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_524(512))
							{
								unk_0xCA9F34C06A0529CE(0, 200, 252);
								unk_0x9E1A4BBC2E70DCFB(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_197();
								func_196(512);
							}
						}
						else
						{
							func_528(512);
						}
					}
				}
				else if (unk_0x18D781E5FEB0E5E3(iLocal_96, 876132797))
				{
					unk_0xCA9F34C06A0529CE(0, 200, 252);
					unk_0x9E1A4BBC2E70DCFB(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_197();
				}
				break;
			}
	}
}

void func_196(int iParam0)
{
	if (!func_491(iLocal_52, iParam0))
	{
		func_482(&iLocal_52, iParam0);
	}
}

void func_197()
{
	int iVar0;
	
	iVar0 = unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD());
	iVar0 = (iVar0 + (1 + iLocal_297));
	if (iVar0 > unk_0x15848AD475FC952B(unk_0xC1A5EC5C986B98AD()))
	{
		iVar0 = unk_0x15848AD475FC952B(unk_0xC1A5EC5C986B98AD());
	}
	unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar0, 0);
	func_198();
}

void func_198()
{
	if (!func_551())
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		iLocal_59 = unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD());
	}
}

bool func_199(int iParam0)
{
	return (((unk_0x7BB3D8F4F6310EB8(iParam0, func_54(), func_46(11), 3) || unk_0x7BB3D8F4F6310EB8(iParam0, func_54(), func_46(21), 3)) || unk_0x7BB3D8F4F6310EB8(iParam0, func_52(), func_45(11), 3)) || unk_0x7BB3D8F4F6310EB8(iParam0, func_52(), func_45(21), 3));
}

bool func_200()
{
	return unk_0x7BB3D8F4F6310EB8(iLocal_96, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_201(iLocal_96, func_49(), 1), 3);
}

char* func_201(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		iVar1 = unk_0x95DC39736F6748E3(iParam0, 1);
		if (unk_0xFBD273FDBCF0C5BD(iVar1, 0))
		{
			if (func_47(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
		}
	}
	return sVar0;
}

void func_202()
{
	if (!func_200())
	{
		return;
	}
	if (func_551())
	{
		func_206();
	}
	if (unk_0x70ACD9400516DB25(iLocal_96) || unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
	{
		return;
	}
	if (unk_0x15A88CFAAFFC6C4B(0, 5000) > 2500)
	{
		func_203();
	}
}

void func_203()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(iLocal_96) && !unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
	{
		if (iLocal_297 == 0)
		{
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_107))
		{
			func_472(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > unk_0xD88C7A93096DA0F7(2f, 5f))
		{
			if (!func_491(iLocal_49, 65536))
			{
				func_482(&iLocal_49, 65536);
				unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_204(iLocal_298);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_40(&uLocal_107);
			}
		}
	}
}

void func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_205(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0x824D23CC0FE1835A(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x824D23CC0FE1835A(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_205(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0x824D23CC0FE1835A(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x824D23CC0FE1835A(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_205(int iParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 1;
	}
	return Global_2657589[iParam0 /*466*/].f_240;
}

void func_206()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (func_207(0.4f))
	{
		func_196(4);
	}
	if (func_524(4))
	{
		if (!func_10(&uLocal_110))
		{
			func_472(&uLocal_110);
		}
		else if (func_7(&uLocal_110) > 2f)
		{
			if (!func_524(16) && !func_207(0.4f))
			{
				func_196(16);
				iLocal_61++;
			}
			else if (func_524(16))
			{
				if (!unk_0x70ACD9400516DB25(iLocal_96))
				{
					func_528(4);
					func_528(16);
					func_40(&uLocal_110);
				}
			}
		}
	}
}

int func_207(float fParam0)
{
	float fVar0;
	
	if (func_208(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		fVar0 = unk_0x2851854AA95554D7(unk_0x93E99A2DBCBA9CFA());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_209(bool bParam0, bool bParam1)
{
	if (!func_551())
	{
		return;
	}
	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_139(iParam1), 0);
	iVar0++;
	if (!func_212(iParam0))
	{
		func_138(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_211(iParam0, iVar0, iParam1, 1);
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_139(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_139(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_139(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_139(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_139(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_139(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_139(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_139(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_139(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_139(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_139(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_139(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_139(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_139(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_139(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_139(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_139(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_139(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_139(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_139(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_139(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_139(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_139(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_139(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_139(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_139(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_139(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_139(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_139(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_139(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_139(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_139(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_139(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_139(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_139(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_139(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_139(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_139(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_139(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_139(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_139(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_139(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_139(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_139(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_139(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_139(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_139(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_139(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_139(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_139(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_139(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_139(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_139(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_212(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_213(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_217(0))
		{
			func_214(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_214(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_216())
		{
			func_215(1, 1);
		}
		else
		{
			func_215(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 16);
	}
	if (unk_0xE444FD7526C8BB46())
	{
		unk_0xD6625E11483B2324(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 30);
	}
	if (!func_20())
	{
		Global_20383.f_1 = 3;
	}
}

void func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0xF756EDB27C588BED(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B2D55EA37C443D5(Global_20320);
		}
		else
		{
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
}

bool func_216()
{
	return BitTest(Global_1962996, 5);
}

int func_217(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return BitTest(Global_1962996, 19);
}

bool func_219(int iParam0)
{
	var uVar0;
	
	if (func_551())
	{
		uVar0 = unk_0x411B750250543BD0(unk_0x7E80728A2E77D8E8(iParam0));
	}
	else
	{
		uVar0 = unk_0x411B750250543BD0(iParam0);
	}
	return uVar0;
}

void func_220()
{
	if (unk_0x72474BA05A104E1E())
	{
		unk_0x78DD793477D04C42(1000);
		unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), func_222(), 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), func_221());
		func_542();
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		unk_0xE9C250FA35A936C8(&iLocal_96);
	}
}

float func_221()
{
	switch (func_23())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_222()
{
	switch (func_23())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_223()
{
	int iVar0;
	
	if (func_225(&uLocal_104, 3f) && !unk_0x2DDFF72E939527F8(uLocal_103))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_224() - 2f) * 1000f));
		unk_0xEEF11E0DB5769366(uLocal_102, 0);
		unk_0x6FF2543994335DB3(uLocal_103, uLocal_102, iVar0, 1, 1);
	}
	if (func_225(&uLocal_104, func_224()))
	{
		unk_0x6D5ACBBD4CE34249(1000);
		iLocal_295 = 10;
	}
}

float func_224()
{
	switch (func_23())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_225(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_7(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x89DE709C9F3052C5(1))
	{
		iVar1 = unk_0xB09B723333956A0B(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_227(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_227(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x11DE375695504B75(1, iParam0, &uVar0, 13))
	{
		func_228(&uVar0, uParam1);
	}
}

void func_228(var uParam0, var uParam1)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xA6B591D40DE982B5(*uParam0))
		{
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0) == unk_0x4DFB7A1A6909D574(*uParam0))
					{
						func_123(0);
						unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
						func_542();
						func_536(uParam1);
					}
				}
			}
		}
	}
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_96))
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			iVar0 = unk_0x2935B4D6CE81318D(iLocal_96);
			if ((iVar0 - iLocal_60) < 0)
			{
				func_123(0);
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_230(var uParam0)
{
	int iVar0;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			iVar0 = unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD());
			if ((iVar0 - iLocal_59) < 0)
			{
				func_123(0);
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_231(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				Var1 = { unk_0x30BE8A934C020461(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_123(0);
					unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (!func_491(iLocal_49, 16))
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 0);
		}
		func_482(&iLocal_49, 16);
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iLocal_99 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (func_551())
		{
			if (unk_0xB6B927AA8C3DAD36(iLocal_99))
			{
				unk_0x82245EF98F7038E8(iLocal_99, 1);
				unk_0xDAF60DD724E215CF(iLocal_99, 4);
				unk_0x9D4246E0B1F8A19C(iLocal_99, 1);
				unk_0x495ED6976429C1E8(iLocal_99, 0, 0);
			}
		}
		else
		{
			unk_0x82245EF98F7038E8(iLocal_99, 1);
			unk_0xDAF60DD724E215CF(iLocal_99, 4);
			unk_0x9D4246E0B1F8A19C(iLocal_99, 1);
		}
		if (!func_377() || !unk_0xE0D346789C5160EB(iLocal_96, iLocal_99, 0))
		{
			func_473(0);
			return;
		}
	}
	else
	{
		func_473(0);
		return;
	}
	func_213(0);
	if ((!unk_0xF193A4B306E6BF93(iLocal_99) && unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) && !func_491(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_375(1, -1);
		unk_0xF6AFEDAAE44A2159("SCRIPT\HUD_321_GO", 1, -1);
		iLocal_301 = 0;
		func_492("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0xEDECDDE17C1E41F5(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_551())
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					{
						if (unk_0xC59A2EB21A3834E2(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
						{
							if (unk_0xA66E176E5772E965(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), -1, 0) == unk_0xC1A5EC5C986B98AD())
							{
								if (unk_0xB6B927AA8C3DAD36(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
								{
									if (!unk_0x1AFE963DA61006ED(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
									{
										unk_0x85BAE84748AD1A23(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0, 0);
									}
								}
								else
								{
									unk_0xBDB0FB8EEE50C9CD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xCD03703A526DDC53(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
							return;
						}
					}
				}
			}
			func_374();
			func_373();
			func_198();
			if (func_370())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_369();
				if (func_551())
				{
					func_196(2);
					if (func_551())
					{
						if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
						{
							if (unk_0xC59A2EB21A3834E2(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
							{
								if (unk_0xB6B927AA8C3DAD36(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
								{
									unk_0x1557CFD5854E2967(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1);
									unk_0x439314AD4FC79186(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 4);
									unk_0x076678BABC7BF47F(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x3088EBAF25E87109(iLocal_96);
				iLocal_301 = 2;
			}
			break;
		
		case 2:
			if (func_368(iLocal_304))
			{
				func_367(&iLocal_304);
				func_5(&iLocal_75, 2);
			}
			func_365(iLocal_96, 0);
			if (func_365(unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (func_363(&sVar1, 0))
				{
					iLocal_48 = unk_0x8C9D6596CF19A4E2();
					iVar5 = unk_0x673F52632EDC33B7();
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							unk_0xE831F5155505E3E0(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							unk_0xE831F5155505E3E0(1);
						}
					}
					func_351();
					iLocal_301 = 3;
					func_492("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_350(&sVar1, -1);
					func_40(&uLocal_113);
					iLocal_297 = 3;
					iLocal_301 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xFEE065E56A9BEF3F())
			{
				return;
			}
			unk_0x0A2C25B9F23F3C32(3);
			func_331();
			func_295(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_294(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			unk_0x8B438725D591ED78(0, 48, 1);
			unk_0x4150CF46B891FFF5(2, 187);
			unk_0x4150CF46B891FFF5(2, 188);
			unk_0x4150CF46B891FFF5(2, 201);
			iVar0 = 0;
			if (unk_0xCC17806DB0C41C19())
			{
				if (unk_0x4566EBBAF3C1E749(2))
				{
					unk_0x8B438725D591ED78(0, 1, 1);
					unk_0x8B438725D591ED78(0, 2, 1);
					unk_0x3210A569BAF257BB(0, 237, 1);
					unk_0x3210A569BAF257BB(0, 238, 1);
					unk_0x3210A569BAF257BB(0, 241, 1);
					unk_0x3210A569BAF257BB(0, 242, 1);
					func_290(0, 0, 0, 1);
					func_289(0, -1, 1);
					if (func_288())
					{
						if (Global_4541029 != iLocal_70)
						{
							unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_4541029;
							func_492("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x87644B1F984197FE(2, 187) || (unk_0x42AAFCB5B7854AA9(2) && unk_0x87644B1F984197FE(2, 242))) || (unk_0x42AAFCB5B7854AA9(2) && unk_0xE665ABCFC5784C35(0, 33))) || (((unk_0xCC17806DB0C41C19() && !unk_0x42AAFCB5B7854AA9(2)) && iVar7 > 100) && (unk_0xA5E11AF0A2B928C1() - iLocal_89) > 300))
			{
				unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_492("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = unk_0xA5E11AF0A2B928C1();
			}
			else if (((unk_0x87644B1F984197FE(2, 188) || (unk_0x42AAFCB5B7854AA9(2) && unk_0x87644B1F984197FE(2, 241))) || (unk_0x42AAFCB5B7854AA9(2) && unk_0xE665ABCFC5784C35(0, 32))) || (((unk_0xCC17806DB0C41C19() && !unk_0x42AAFCB5B7854AA9(2)) && iVar7 < -100) && (unk_0xA5E11AF0A2B928C1() - iLocal_89) > 300))
			{
				unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_492("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70 = (iLocal_70 - 1);
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = unk_0xA5E11AF0A2B928C1();
			}
			else if (unk_0x6BD2D66249562506(2, 201) || iVar0 == 1)
			{
				unk_0x531D638530A8DB97(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0xEDECDDE17C1E41F5(3);
				func_284();
				unk_0x5CE354E3C73D2002(unk_0xC1A5EC5C986B98AD());
				iLocal_301 = 4;
			}
			func_283(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = unk_0xA7C5E39CDF200948(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_375(1, -1);
				func_282();
				func_281(0);
				iLocal_64 = unk_0xA5E11AF0A2B928C1();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_492("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
				if (iLocal_72 > 0)
				{
					if (func_127(iLocal_96))
					{
						func_126();
					}
					else
					{
						func_473(0);
					}
					return;
				}
				else
				{
					if (func_276() >= 20)
					{
						iVar10 += 20;
						func_234(20);
						unk_0xCFFDA1550DF82B52(iLocal_96, iVar10);
					}
					func_473(1);
					return;
				}
			}
			if (!unk_0x2BBF749E555360DC(func_50(unk_0xC1A5EC5C986B98AD(), 0, 0)))
			{
			}
			else
			{
				func_375(1, -1);
				func_282();
				if (unk_0xA70F591D720A212F())
				{
					func_482(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_492("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_297 != 3)
				{
					if (func_276() > func_233(iLocal_297))
					{
						func_234(func_233(iLocal_297));
						iVar10 = (iVar10 + func_233(iLocal_297));
					}
					func_41(&uLocal_107, (14f - 4f));
					func_492("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_295 = 11;
				}
				unk_0xCFFDA1550DF82B52(iLocal_96, iVar10);
				iLocal_64 = unk_0xA5E11AF0A2B928C1();
			}
			break;
	}
}

int func_233(int iParam0)
{
	if (unk_0xA70F591D720A212F())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_234(int iParam0)
{
	var uVar0;
	
	if (!func_551())
	{
		func_248(func_23(), 1, iParam0);
	}
	else if (!func_247())
	{
		unk_0x4301840A5D77DA80(iParam0, 0, 0);
	}
	else
	{
		func_235(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_247())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_140()) || unk_0xF0773A1CAE4717D9())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x8C722BABE4726C11(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE0AAA58EEB49D003(iVar4))
		{
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_242(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_241(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD327B45EF800DBCD();
			}
		}
		else if (!bVar0)
		{
			unk_0xCF052ECECC8D7067(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_239(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_239(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_240(&(uParam0->f_14));
	func_240(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_240(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_241(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_242(int iParam0, var uParam1)
{
	Global_2697013 = uParam1;
	Global_2697012 = iParam0;
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = unk_0xE16824A2A0B2A6D8();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_244(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_244(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_246(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_245();
		unk_0x46F55A5B9F053761(1, &Var0, 36, iVar36);
	}
}

void func_245()
{
	unk_0x3EC562D93709C894("AM_ARENA_SHP");
}

var func_246(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, bParam0);
	}
	return uVar0;
}

int func_247()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	if (func_275(iParam0) == 3)
	{
		return 0;
	}
	if (func_275(iParam0) == 4)
	{
		return 0;
	}
	return func_249(func_275(iParam0), 0, iParam1, iParam2, 0);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_274();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_273(99, 1);
					func_272(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_272(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_272(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_258(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_256(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_256(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_272(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_272(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63C7B2D430A46FC3())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_256(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_272(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_272(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_255(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_273(95, iParam3);
					break;
				
				case 1:
					func_273(97, iParam3);
					break;
				
				case 2:
					func_273(96, iParam3);
					break;
			}
			func_273(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_252(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_252(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_272(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_272(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_272(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_251(iParam0);
	if (Global_43257 == 15)
	{
		func_250(0);
	}
	return 1;
}

void func_250(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_252(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_155(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_155(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_155(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_155(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_138(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_138(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_138(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_138(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_138(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_138(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_254() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_254() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_253(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_253(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_255(int iParam0)
{
	func_273(93, iParam0);
	func_273(29, iParam0);
	func_273(30, iParam0);
}

int func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_257(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_257(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_257(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_257(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_141(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_141(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_141(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_141(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_141(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_141(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_254() /*5568*/].f_681.f_10, iParam0);
}

var func_257(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_140();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_258(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x73651E4B1D91FE32(27))
	{
		return 0;
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDD7756E2742E0F6D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3CC35ACFFC9C730E(joaat("num_cash_spent"), iVar1, 1);
		func_154(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_259(27, 1);
	return 1;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_260(iParam0, iParam1);
}

int func_260(int iParam0, int iParam1)
{
	if (func_552(14) && !func_271(iParam0))
	{
		return 0;
	}
	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_270(&Global_4542597))
	{
		if (func_268(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_261(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
		{
			return 0;
		}
		if (unk_0x73651E4B1D91FE32(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_261(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_552(14) && !func_271(iParam1))
	{
		return 0;
	}
	if (func_268(uParam0, iParam1))
	{
		return 0;
	}
	if (func_267(uParam0) < 0f)
	{
		func_266(uParam0, 0);
	}
	func_264(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_262(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_262(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_552(14) && !func_271(iParam1))
	{
		return 0;
	}
	if (func_268(uParam0, iParam1))
	{
		return 0;
	}
	if (func_267(uParam0) < 0f)
	{
		func_266(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_263(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_263(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_264(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_265(uParam0, iVar0);
		iVar0++;
	}
	func_266(uParam0, (Global_4542596 - 0.5f));
}

void func_265(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_266(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_267(var uParam0)
{
	return uParam0->f_80;
}

bool func_268(var uParam0, int iParam1)
{
	return func_269(uParam0, iParam1) != -1;
}

int func_269(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_270(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_272(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_274()
{
	int iVar0;
	
	if (unk_0x7FFBE14C34D75E19())
	{
		unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_275(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_276()
{
	if (func_551())
	{
		return func_278(unk_0x93E99A2DBCBA9CFA());
	}
	return func_277(func_23());
}

int func_277(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_278(int iParam0)
{
	var uVar0;
	
	uVar0 = func_279(iParam0);
	return uVar0;
}

int func_279(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return unk_0x6CD066255FC6B2AA(-1);
		}
		else if (func_280(iParam0))
		{
			return Global_1853910[iParam0 /*862*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

void func_281(int iParam0)
{
	if (unk_0xA0674C2A551A1A0B() != 255)
	{
		unk_0x6A124FC30364A990(iParam0);
		unk_0x04334927E8B4A230(iParam0);
	}
}

void func_282()
{
	Global_23131.f_5 = 0;
}

void func_283(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23270.f_6182 = iParam0;
	Global_23270.f_6317 = iParam2;
	if (Global_23270.f_6182 < Global_23270.f_6181)
	{
		Global_23270.f_6181 = Global_23270.f_6182;
	}
	else if ((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >= (Global_23270.f_6181 + Global_23270.f_5668)))
	{
		iVar0 = Global_23270.f_6181;
		while (iVar0 <= Global_23270.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23270.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128)
		{
			Global_23270.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23270.f_6181;
			while (iVar0 <= Global_23270.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23270.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23270.f_5081), "", 24);
		StringCopy(&(Global_4540953.f_21), "", 16);
	}
}

void func_284()
{
	if (iLocal_70 == iLocal_71)
	{
		iLocal_297 = 3;
	}
	else
	{
		iLocal_298 = iLocal_289[iLocal_70];
		func_285();
		if (iLocal_298 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			unk_0xF6AFEDAAE44A2159("PROSTITUTE_BLOWJOB", 0, -1);
			iLocal_297 = 0;
		}
		else if (iLocal_298 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 1;
		}
		else if (iLocal_298 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 2;
		}
	}
}

void func_285()
{
	switch (iLocal_298)
	{
		case 0:
			func_287();
			break;
		
		case 1:
		case 2:
			func_286();
			break;
	}
}

void func_286()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_287()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_288()
{
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (Global_4541029 > -1)
		{
			if (unk_0x87644B1F984197FE(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x42AAFCB5B7854AA9(2))
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x90B3C4F0C0772F5A();
	}
	if (Global_4541029 == -6)
	{
		unk_0x497006BE45C6EFA5(4);
		if (iParam0 && unk_0x51EB177CA0562B62(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4541029 = -1;
			return 0;
		}
	}
	if (((Global_4541029 > -1 || Global_4541029 == -3) || Global_4541029 == -2) || unk_0x18226C2FEDF3E3A5())
	{
		unk_0x497006BE45C6EFA5(1);
		return 0;
	}
	if (Global_4541029 == -1 && iParam0)
	{
		if (unk_0x51EB177CA0562B62(2, 237))
		{
			unk_0x497006BE45C6EFA5(4);
			Global_4541029 = -6;
			return 1;
		}
		else
		{
			unk_0x497006BE45C6EFA5(3);
			return 0;
		}
	}
	unk_0x497006BE45C6EFA5(1);
	return 0;
}

void func_290(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x42AAFCB5B7854AA9(2))
	{
		Global_4541029 = -1;
		return;
	}
	unk_0x43C58E3DBF30505A(1);
	fVar0 = Global_23267;
	fVar2 = (fVar0 + Global_23269);
	fVar3 = Global_23270.f_6173;
	fVar1 = (Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23270.f_6175 < 1)
	{
		fVar1 = (Global_23270.f_6173 - 0.034722f);
	}
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x052C2DE4A27A4869(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x052C2DE4A27A4869(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x4B358573708E8571();
	func_293();
	if (Global_4541029 == -6)
	{
		return;
	}
	Global_4541029 = -1;
	fVar7 = Global_4541023;
	fVar8 = Global_4541024;
	if (Global_23270.f_6176 > Global_23270.f_6175)
	{
		if (((Global_4541023 >= fVar0 && Global_4541023 <= fVar2) && Global_4541024 >= fVar3) && Global_4541024 < (fVar3 + fVar6))
		{
			Global_4541029 = -2;
			if (bParam3)
			{
				func_292(0);
			}
			return;
		}
		if (((Global_4541023 >= fVar0 && Global_4541023 <= fVar2) && Global_4541024 >= (fVar3 + fVar6)) && Global_4541024 < (fVar3 + 0.034722f))
		{
			Global_4541029 = -3;
			if (bParam3)
			{
				func_292(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23270.f_6176 == -1)
		{
			Global_4541029 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23270.f_6175);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x8241C4807850E84A(76, 84);
				unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
				func_291(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23269, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x4B358573708E8571();
			}
		}
		Global_4541029 = Global_23270.f_8513[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541029 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541029 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541029 = -4;
		return;
	}
	Global_4541029 = -1;
}

void func_291(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xD88E9AF5626B0121((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_292(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23267;
	fVar1 = Global_23270.f_6173;
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541029 == -2)
	{
		func_291(fVar0, fVar1, Global_23269, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541029 == -3)
	{
		func_291(fVar0, (fVar1 + fVar2), Global_23269, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x4B358573708E8571();
}

void func_293()
{
	Global_4541025 = Global_4541023;
	Global_4541026 = Global_4541024;
	Global_4541023 = unk_0xA436D585B7588C3A(2, 239);
	Global_4541024 = unk_0xA436D585B7588C3A(2, 240);
	Global_4541027 = (Global_4541023 - Global_4541025);
	Global_4541028 = (Global_4541024 - Global_4541026);
}

void func_294(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x081A0AFF82F20357(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x081A0AFF82F20357(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x081A0AFF82F20357(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x081A0AFF82F20357(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xA436D585B7588C3A(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xA436D585B7588C3A(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xA436D585B7588C3A(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xA436D585B7588C3A(2, 221) * 127f));
		}
	}
}

void func_295(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_330(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_328(0, bParam6))
	{
		return;
	}
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23270)
	{
		if (func_326(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23270 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23269;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) == unk_0x14580F20CBCE4FA9("HIDE"))
	{
		fVar59 = Global_23268;
	}
	else
	{
		fVar59 = (((Global_23268 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_324(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23270.f_5661 <= 1)
		{
			func_320(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23270.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23270.f_6171)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) == unk_0x14580F20CBCE4FA9("HIDE"))
			{
				fVar51 = Global_23268;
			}
			else
			{
				if (Global_23270)
				{
					StringCopy(&cVar63, func_319(29), 64);
					StringCopy(&cVar79, func_316(29, 1), 64);
					if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
					{
						func_291(Global_23267, Global_23268, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xB978B5D428DA5DE9(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xB978B5D428DA5DE9(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23270.f_8862)
				{
					iVar1 = Global_23270.f_8858;
					iVar2 = Global_23270.f_8859;
					iVar3 = Global_23270.f_8860;
					iVar4 = Global_23270.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_291(Global_23267, (Global_23268 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23268 + fVar57) + 0.034722f) + 0f);
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) != 0)
				{
					func_315();
					unk_0x1AFC19685A6AF4A9(&(Global_23270.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23270.f_74)
					{
						if (Global_23270.f_5[iVar14] == 2)
						{
							unk_0x64C50E40AA09A6B5(Global_23270.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23270.f_5[iVar14] == 3)
						{
							unk_0xC072D668E49D9A7A(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23270.f_5[iVar14] == 1)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 8)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 5)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 6)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 7)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 9)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x8E03B3A2F624EF8B((Global_23267 + 0.00390625f), ((Global_23268 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23270.f_6178)
				{
					func_315();
					func_313((((Global_23267 + fParam5) - 0.00390625f) - func_314("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
				}
				else if (Global_23270.f_6174 > Global_23270.f_5668)
				{
					if (Global_23270.f_6177 != 0)
					{
						func_315();
						func_313((((Global_23267 + fParam5) - 0.00390625f) - func_314("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
					}
				}
			}
			iVar6 = Global_23270.f_6181;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23270.f_8872)
			{
				iVar1 = Global_23270.f_8868;
				iVar2 = Global_23270.f_8869;
				iVar3 = Global_23270.f_8870;
				iVar4 = Global_23270.f_8871;
			}
			else
			{
				unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23270.f_5668 && iVar6 <= Global_23270.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23270.f_5928[iVar6])
					{
						if (Global_23270.f_5799[iVar6] && iVar6 != Global_23270.f_6181)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar56 = Global_23270.f_6188[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23270.f_6174 > Global_23270.f_5668)
			{
				if (Global_23270.f_8877)
				{
					iVar1 = Global_23270.f_8873;
					iVar2 = Global_23270.f_8874;
					iVar3 = Global_23270.f_8875;
					iVar4 = Global_23270.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_291(Global_23267, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x2D09CBD1F5910DEC("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23270.f_8890)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2D32CB870722E022(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5081)) != 0 && Global_23270.f_5163 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				if (Global_23270.f_5165 != 0)
				{
					func_326(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_312(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_291(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_312(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23270.f_5165 != 0)
				{
					func_326(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_311(Global_23270.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_5165), func_316(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_312(fVar42);
					unk_0x4DCD7891F910F5EC(&(Global_23270.f_5087));
					iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
					unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_291(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23270.f_8882)
					{
						iVar1 = Global_23270.f_8878;
						iVar2 = Global_23270.f_8879;
						iVar3 = Global_23270.f_8880;
						iVar4 = Global_23270.f_8881;
					}
					else
					{
						unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
					func_312(fVar42);
					unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5087));
					unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23270.f_5163 > 0)
				{
					if ((unk_0xA5E11AF0A2B928C1() - Global_23270.f_5164) > Global_23270.f_5163)
					{
						StringCopy(&(Global_23270.f_5081), "", 24);
						Global_23270.f_5163 = -1;
					}
				}
			}
			else if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_5087)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				func_312(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_23270.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_291(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_312(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5087));
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_21)) != 0 && Global_4540953.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				if (Global_4540953.f_67 != 0)
				{
					func_326(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_312(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_291(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_312(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4540953.f_67 != 0)
				{
					func_326(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_311(Global_4540953.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xB978B5D428DA5DE9(func_319(Global_4540953.f_67), func_316(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540953.f_65 > 0)
				{
					if ((unk_0xA5E11AF0A2B928C1() - Global_4540953.f_66) > Global_4540953.f_65)
					{
						StringCopy(&(Global_4540953.f_21), "", 16);
						Global_4540953.f_65 = -1;
					}
				}
			}
			func_304(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x8241C4807850E84A(76, 84);
			unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23270.f_6171)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23270.f_5661;
			if (Global_23270.f_6172)
			{
				iVar96 = (Global_23270.f_6175 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23270.f_6188[iVar6] != 0f)
				{
					fVar56 = Global_23270.f_6188[iVar6];
				}
				if (Global_23270.f_6172)
				{
					iVar6 = Global_23270.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23270.f_6181 && iVar9 < Global_23270.f_5668)
				{
					bVar33 = true;
					if (Global_23270.f_6182 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23270.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23270.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23267 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23270.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23270.f_8884)
					{
						unk_0x2D32CB870722E022(Global_23270.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2D32CB870722E022(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_23270.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23270.f_5669)
				{
					if (BitTest(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8] == 5)
					{
						if (Global_23270.f_6172)
						{
							iVar19 = Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar20 = Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar21 = Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar22 = Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar23 = Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
						}
						else
						{
							Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar19;
							Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar20;
							Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar21;
							Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar22;
							Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23270.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23270.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23270.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23270.f_5505[iVar8 + 1])
						{
							fVar46 = (Global_23270.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
						}
						if ((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23270.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23270.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_302(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x061288CA1E28CA54(&(Global_23270.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x64C50E40AA09A6B5(Global_23270.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC072D668E49D9A7A(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x1337CDB3E4371A85(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_326(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23270.f_4824[(iVar22 + iVar14)] == 2 || Global_23270.f_4824[(iVar22 + iVar14)] == 52) || Global_23270.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
										Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar44;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23270.f_5526[iVar99] == 2)
												{
													Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] = (Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] - Global_23270.f_5511[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar44 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_326(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_319(26), func_316(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_319(27), func_316(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23270.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_302(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_301(bVar32);
										}
										unk_0x1AFC19685A6AF4A9(&(Global_23270.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x64C50E40AA09A6B5(Global_23270.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC072D668E49D9A7A(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar28)] == 2 || Global_23270.f_4824[(iVar22 + iVar28)] == 52) || Global_23270.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_326(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_326(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_311(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_4824[(iVar22 + iVar28)]), func_316(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_4824[(iVar22 + iVar28)]), func_316(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23270.f_5526[iVar8] == 2)
										{
											unk_0x8E03B3A2F624EF8B(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x8E03B3A2F624EF8B((fVar34 + fVar42), fVar35, 0);
											if (func_300() && unk_0x24B651D85CCE5EB4(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23270.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_302(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0xF4621DEB617A5113(0f, (0.35f * 0.7f));
													unk_0x4EC989440A6E11DD(255, 255, 255, 150);
													unk_0xD88E9AF5626B0121((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0x1AFC19685A6AF4A9(&cVar105);
													unk_0x64C50E40AA09A6B5((Global_23270.f_6181 + iVar30));
													unk_0x8E03B3A2F624EF8B((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar14)] != 2 && Global_23270.f_4824[(iVar22 + iVar14)] != 52) && Global_23270.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_326(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_326(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_311(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23270.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_4824[(iVar22 + iVar14)]), func_316(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_4824[(iVar22 + iVar14)]), func_316(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_4824[(iVar22 + iVar14)]), func_316(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_302(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_301(bVar32);
										}
										unk_0x061288CA1E28CA54("NUMBER");
										unk_0x64C50E40AA09A6B5(Global_23270.f_4309[iVar20]);
										fVar43 = unk_0x1337CDB3E4371A85(1);
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_326(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_319(26), func_316(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_319(27), func_316(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_302(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										func_299((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_302(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_301(bVar32);
										}
										unk_0x061288CA1E28CA54("NUMBER");
										unk_0xC072D668E49D9A7A(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
										fVar43 = unk_0x1337CDB3E4371A85(1);
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_326(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_319(26), func_316(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_319(27), func_316(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_302(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
									func_298((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_326(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23270.f_6172)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23270.f_5526[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
											Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
											fVar44 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
										}
										if (bVar54)
										{
											if (func_326(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23270.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_311(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xB978B5D428DA5DE9(func_319(26), func_316(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_326(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_326(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_311(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xB978B5D428DA5DE9(func_319(27), func_316(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_326(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_311(Global_23270.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xB978B5D428DA5DE9(func_319(Global_23270.f_4824[iVar22]), func_316(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_297(Global_23270.f_4824[iVar22])), (fVar37 * func_297(Global_23270.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23270.f_5499[iVar8] == 5)
						{
							if (Global_23270.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							if (Global_23270.f_5518[iVar8])
							{
								if (func_326(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23270.f_8513[iVar9] = iVar6;
						Global_23270.f_6183 = iVar6;
						iVar9++;
						if (Global_23270.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23270.f_6188[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23270.f_6171)
					{
						Global_23270.f_5928[iVar6] = 1;
						if (Global_23270.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23270.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23270.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23270.f_6171)
			{
				Global_23270.f_6173 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23270.f_6176 = iVar11;
				Global_23270.f_6174 = iVar10;
				Global_23270.f_6171 = 1;
			}
		}
		if (!Global_23270.f_6172)
		{
			Global_23270.f_6175 = iVar9;
			Global_23270.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23270.f_6319 = fVar51;
	Global_23270.f_6321 = unk_0xA5E11AF0A2B928C1();
	unk_0x314A52B02A05EEDE(Global_23270.f_6319);
	if (!Global_23270.f_8857)
	{
		func_213(0);
	}
	Global_23270.f_8857 = 0;
	if (bParam2)
	{
		unk_0xEDECDDE17C1E41F5(10);
	}
	unk_0xEDECDDE17C1E41F5(6);
	unk_0xEDECDDE17C1E41F5(7);
	unk_0xEDECDDE17C1E41F5(9);
	unk_0xEDECDDE17C1E41F5(8);
	if (bParam0)
	{
		func_296(1);
	}
	unk_0x4B358573708E8571();
}

void func_296(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

float func_297(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_298(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0xC072D668E49D9A7A(uParam3, uParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

void func_299(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(iParam3);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, iParam4);
}

var func_300()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

void func_301(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2D32CB870722E022(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2D32CB870722E022(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
}

void func_302(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_303(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2D32CB870722E022(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2D32CB870722E022(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x4EC989440A6E11DD(155, 155, 155, 255);
		}
		else
		{
			unk_0x4EC989440A6E11DD(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x4EC989440A6E11DD(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x4EC989440A6E11DD(155, 155, 155, 255);
	}
	else
	{
		unk_0x4EC989440A6E11DD(155, 155, 155, 255);
	}
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0x44B717E97A50473A(1);
	if (bParam5)
	{
		unk_0xF4621DEB617A5113(0f, 0.425f);
		unk_0x3EACBAAEB55B5131(4);
	}
	else if (bParam6)
	{
		unk_0xF4621DEB617A5113(0f, 0.425f);
		unk_0x3EACBAAEB55B5131(6);
	}
	else
	{
		unk_0x3EACBAAEB55B5131(0);
	}
	unk_0xD2087B0A3696F221(0f, 1f);
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_303(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_304(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_330(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_328(bParam4, bParam8))
	{
		return;
	}
	if (func_309())
	{
		return;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_307(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			return;
		}
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x6C75193377D3CE17() == 0 || unk_0xEBDA168F3804CE1F())
		{
			return;
		}
	}
	if (Global_23270.f_5166 != 0)
	{
		if (unk_0x6163ED6C61AD64FC(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (Global_23270.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0x28AEB293270C3DDA(2, Global_23270.f_5465[iVar1], 1), 64);
				}
				else if (Global_23270.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0xB49FF1EF1051E9DA(2, Global_23270.f_5480[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23270.f_5167 = 0;
		}
		if (!Global_23270.f_5167)
		{
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xC49D258FBF3BF214((1f - (Global_23270.f_5524 / 100f)));
			unk_0xAE3413B0654A0035();
			if (unk_0xCC17806DB0C41C19())
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD546F85F5AF0F231(1);
				unk_0xAE3413B0654A0035();
			}
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar1 /*4*/])) != unk_0x14580F20CBCE4FA9("PREV"))
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					func_306(&(Global_23270.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar2 /*4*/])) == unk_0x14580F20CBCE4FA9("PREV"))
					{
						func_306(&(Global_23270.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23270.f_5450[iVar1] == -1)
					{
						func_305(&(Global_23270.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23270.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x610EBC15DA88FA9D(iVar3, 70);
						}
						else
						{
							unk_0x64C50E40AA09A6B5(iVar3);
						}
						unk_0xF8FCA9E7130CE1C8();
					}
					if (unk_0xCC17806DB0C41C19())
					{
						if (Global_23270.f_5465[iVar1] != 363 && BitTest(Global_23270.f_5495, iVar1))
						{
							unk_0xD546F85F5AF0F231(1);
							unk_0xC6A3EF6C4A3412C1(Global_23270.f_5465[iVar1]);
						}
						else
						{
							unk_0xD546F85F5AF0F231(0);
							unk_0xC6A3EF6C4A3412C1(363);
						}
					}
					unk_0xAE3413B0654A0035();
				}
				iVar1++;
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_16)) != unk_0x14580F20CBCE4FA9(""))
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(Global_23270.f_5166);
				func_306(&Global_4540953);
				if (Global_4540953.f_20 == -1)
				{
					func_305(&(Global_4540953.f_16));
				}
				else
				{
					iVar4 = Global_23270.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iVar4, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iVar4);
					}
					unk_0xF8FCA9E7130CE1C8();
				}
				unk_0xAE3413B0654A0035();
			}
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23270.f_5525)
			{
				unk_0xC6A3EF6C4A3412C1(1);
			}
			else
			{
				unk_0xC6A3EF6C4A3412C1(0);
			}
			unk_0xAE3413B0654A0035();
			Global_23270.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23270.f_5166)
		{
			if (Global_23270.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iParam2, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iParam2);
					}
					unk_0xF8FCA9E7130CE1C8();
					unk_0xAE3413B0654A0035();
				}
			}
			iVar1++;
		}
		if (Global_4540953.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC6A3EF6C4A3412C1(iVar1);
				unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
				if (bParam5)
				{
					unk_0x610EBC15DA88FA9D(iParam2, 70);
				}
				else
				{
					unk_0x64C50E40AA09A6B5(iParam2);
				}
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
			}
		}
		unk_0x8241C4807850E84A(76, 66);
		unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23270.f_8892)
			{
				unk_0x71CD983E90DB042A(15, 0f, -0.0375f);
				Global_23270.f_8892 = 1;
			}
		}
		else if (Global_23270.f_8892)
		{
			unk_0x833DC7C29EA6EEF3(15);
			Global_23270.f_8892 = 0;
		}
		unk_0x4B358573708E8571();
		if (Global_23270.f_5498)
		{
			unk_0x8241C4807850E84A(82, 66);
			unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
			unk_0x20C68F87D0FDD976(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x4B358573708E8571();
		}
		else
		{
			unk_0x55CCA1B8F633F628(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_305(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_306(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

bool func_307(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_308(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_308(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_140();
	}
	if (Global_1575040[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_309()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_310())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xF756EDB27C588BED(&Var0);
		if (Global_20328 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_310()
{
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_311(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2D32CB870722E022(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			unk_0x2D32CB870722E022(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_312(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x3EACBAAEB55B5131(0);
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0xE4FA115EFC04A654(2);
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
	unk_0xD2087B0A3696F221(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_313(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	unk_0x64C50E40AA09A6B5(uParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

float func_314(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (unk_0x14580F20CBCE4FA9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_315();
	unk_0x061288CA1E28CA54(sParam0);
	unk_0x64C50E40AA09A6B5(uParam1);
	unk_0x64C50E40AA09A6B5(uParam2);
	return unk_0x1337CDB3E4371A85(1);
}

void func_315()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23270.f_8867)
	{
		iVar0 = Global_23270.f_8863;
		iVar1 = Global_23270.f_8864;
		iVar2 = Global_23270.f_8865;
		iVar3 = Global_23270.f_8866;
	}
	unk_0x3EACBAAEB55B5131(0);
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
	unk_0xD2087B0A3696F221((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

var func_316(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_7488[iParam0 /*16*/])))
	{
		if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_318(unk_0x93E99A2DBCBA9CFA()) };
			if (unk_0x5513B5F4E17C7720(&Var19, &uVar3))
			{
				return func_317(&uVar3);
			}
		}
		else
		{
			return func_317(&(Global_23270.f_7488[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_317(var uParam0)
{
	return uParam0;
}

struct<13> func_318(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

char* func_319(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6463[iParam0 /*16*/])))
	{
		if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_6463[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_318(unk_0x93E99A2DBCBA9CFA()) };
			unk_0x5513B5F4E17C7720(&Var16, &uVar0);
			return func_317(&uVar0);
		}
		else
		{
			return func_317(&(Global_23270.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_320(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23270.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23270.f_5661 >= 128)
	{
		return;
	}
	if (Global_23270.f_5663 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 < Global_23270.f_6184)
	{
		return;
	}
	if (Global_23270.f_5661 != iParam0)
	{
		Global_23270.f_5661 = iParam0;
		Global_23270.f_5662 = 0;
	}
	iVar0 = Global_23270.f_5499[Global_23270.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23270.f_5662 < 4 && iVar0 != 1)
		{
			Global_23270.f_5662++;
			iVar0 = Global_23270.f_5499[Global_23270.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
	if (!unk_0x2AC37494BBF1DB16(sParam1) && !unk_0x42FA33BDEDF21186(sParam1))
	{
	}
	Global_23270.f_1616[Global_23270.f_5663] = bParam3;
	Global_23270.f_1873[Global_23270.f_5663] = iParam4;
	Global_23270.f_2130[Global_23270.f_5663] = iParam6;
	Global_23270.f_5663++;
	if (!bParam3)
	{
		func_323(Global_23270.f_5661, 1);
	}
	else
	{
		func_323(Global_23270.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_322(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
		if (Global_23270.f_5518[Global_23270.f_5662])
		{
			func_326(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23270.f_5511[Global_23270.f_5662])
		{
			Global_23270.f_5511[Global_23270.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_321(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
			if (fVar4 > Global_23270.f_6188[iParam0])
			{
				Global_23270.f_6188[iParam0] = fVar4;
			}
		}
	}
	unk_0xECDAB41968FF21A8(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
	Global_23270.f_5662++;
	Global_23270.f_6187 = 1;
	Global_23270.f_6185 = (Global_23270.f_5663 - 1);
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = iParam2;
}

float func_321(char* sParam0)
{
	if (!unk_0x42FA33BDEDF21186(sParam0))
	{
	}
	return unk_0xF9BE0DFC714A1056(0.35f, 0);
}

float func_322(char* sParam0)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (unk_0x14580F20CBCE4FA9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_302(0, 1, 0, 0, 0, 0, 0);
	unk_0x061288CA1E28CA54(sParam0);
	return unk_0x1337CDB3E4371A85(1);
}

void func_323(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_324(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xC36FC65019094E47(uParam1, uParam2);
		return;
	}
	unk_0x6FC658A1BD624E7C(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xE5A34D583EE533B7(0);
	if (func_325(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_325(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

int func_326(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_319(iParam0), 64);
	StringCopy(&cVar16, func_316(iParam0, bParam1), 64);
	if (unk_0x14580F20CBCE4FA9(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_324(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x2D09CBD1F5910DEC(&cVar0, &cVar16) };
		fVar38 = (func_327(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xF764DD4275E8FDF4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23269)
			{
				*fParam4 = (*fParam4 * (Global_23269 / *fParam3));
				*fParam3 = Global_23269;
			}
		}
		return 1;
	}
	return 0;
}

float func_327(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_328(bool bParam0, bool bParam1)
{
	if (Global_2672505.f_1684.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x35DF833D93BCC488() || (func_30(8, -1) && func_329() != 65)) || (unk_0xD7863C03D2155822() != 0 && !bParam1)) || (unk_0xB53553DC4AAC7D8A() && !bParam0)) || unk_0x4136116828BCAAB6()) || Global_78819) || Global_23270.f_8891) || unk_0x47F8B78DC1737D5C()) || Global_100733.f_1474)
	{
		return 0;
	}
	return 1;
}

int func_329()
{
	return Global_1574993;
}

int func_330(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA26A9A07F761D8F8() && unk_0x839E00E966CE3F2D())
		{
			iParam2 = unk_0x3B01E4A065DEF5C7();
		}
	}
	StringCopy(&cVar0, unk_0x688846D56810779A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x14580F20CBCE4FA9(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23270.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23270.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23270.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_331()
{
	if (!func_368(iLocal_304))
	{
		iLocal_304 = func_349();
		func_340(&iLocal_304, 0, 0, unk_0x15A88CFAAFFC6C4B(1, 2), 0, 0, 0);
	}
	else if (!func_491(iLocal_75, 2))
	{
		if (func_332(iLocal_304))
		{
			iLocal_304 = func_349();
			func_340(&iLocal_304, 0, 0, unk_0x15A88CFAAFFC6C4B(1, 2), 0, 0, 0);
			func_482(&iLocal_75, 2);
		}
	}
	else if (func_332(iLocal_304))
	{
		func_282();
		func_473(0);
	}
}

bool func_332(int iParam0)
{
	return func_333(func_349(), iParam0);
}

int func_333(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_368(iParam1) || !func_368(iParam0))
	{
		return 1;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	iVar1 = func_334(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_334(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_335(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_336(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_337(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_338(int iParam0)
{
	return iParam0 & 15;
}

var func_339(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_167(BitTest(iParam0, 31), -1, 1)) + 2011;
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_339(*iParam0);
	iVar1 = func_338(*iParam0);
	iVar2 = func_337(*iParam0);
	iVar3 = func_336(*iParam0);
	iVar4 = func_335(*iParam0);
	iVar5 = func_334(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_348(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_348(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_341(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_347(uParam0, iParam1);
	func_346(uParam0, iParam2);
	func_345(uParam0, iParam3);
	func_344(uParam0, iParam5);
	func_343(uParam0, iParam4);
	func_342(uParam0, iParam6);
}

void func_342(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_343(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_338(*uParam0);
	iVar1 = func_339(*uParam0);
	if (iParam1 < 1 || iParam1 > func_348(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_344(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_348(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_349()
{
	var uVar0;
	
	func_347(&uVar0, unk_0x731F95B6458DCF80());
	func_346(&uVar0, unk_0x77BBAAED3E25322C());
	func_345(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_343(&uVar0, unk_0x8C0F17CAC308A14B());
	func_344(&uVar0, unk_0x61117764C67882B7());
	func_342(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_350(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

void func_351()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_362(1);
	func_281(1);
	unk_0x61F7D56FFAFBF706(0);
	func_361(0, 0);
	func_360(1, 1, 0, 0, 0);
	func_359(1, 2, 1, 1, 1);
	func_358("PROS_OPTS");
	func_357(201, "PROS_SELECT", -1, 0);
	iLocal_71 = 0;
	iVar0 = func_233(0);
	iVar1 = func_233(1);
	iVar2 = func_233(2);
	if (func_276() >= iVar0)
	{
		func_320(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_354(iVar0, 0);
		iLocal_289[iLocal_71] = 0;
		iLocal_71++;
	}
	if (func_276() >= iVar1 && func_353(iLocal_99))
	{
		func_320(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_354(iVar1, 0);
		iLocal_289[iLocal_71] = 1;
		iLocal_71++;
	}
	if (func_276() >= iVar2 && func_353(iLocal_99))
	{
		func_320(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_354(iVar2, 0);
		iLocal_289[iLocal_71] = 2;
		iLocal_71++;
	}
	func_320(iLocal_71, "PROS_QUIT", 0, 1, 0, 0, 0);
	iLocal_70 = 0;
	func_283(iLocal_70, 1, 1);
	func_352();
	iLocal_89 = unk_0xA5E11AF0A2B928C1();
	iLocal_301 = 3;
}

void func_352()
{
	Global_23131.f_5 = 1;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		iVar0 = unk_0x504B9BB48D41C264(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == joaat("infernus2"))
		{
			return 0;
		}
	}
	return 1;
}

void func_354(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23270.f_5665 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 >= 4)
	{
		return;
	}
	if (Global_23270.f_6187 != 1)
	{
		return;
	}
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		return;
	}
	Global_23270.f_4309[Global_23270.f_5665] = iParam0;
	Global_23270.f_5665++;
	Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186] = 2;
	Global_23270.f_6186++;
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		fVar0 = func_356();
		if (Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186 == Global_23270.f_6184)
		{
			func_326(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)])
		{
			Global_23270.f_5511[(Global_23270.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23270.f_6186 >= Global_23270.f_6184)
		{
			fVar3 = func_355();
			if (fVar3 > Global_23270.f_6188[Global_23270.f_5661])
			{
				Global_23270.f_6188[Global_23270.f_5661] = fVar3;
			}
		}
	}
}

float func_355()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)] != 0)
		{
			if (func_326(Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xF9BE0DFC714A1056(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xF9BE0DFC714A1056(0.35f, 0);
}

float func_356()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_302(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		unk_0x061288CA1E28CA54(&(Global_23270.f_79[Global_23270.f_6185 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x64C50E40AA09A6B5(Global_23270.f_4309[((Global_23270.f_5665 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0xC072D668E49D9A7A(Global_23270.f_4566[((Global_23270.f_5666 - iVar4) + iVar10)], Global_23270.f_4695[((Global_23270.f_5666 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		fVar0 = unk_0x1337CDB3E4371A85(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)] != 0)
		{
			func_326(Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_357(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x28AEB293270C3DDA(2, iParam0, 1);
	if (Global_23270.f_5166 >= 14)
	{
		StringCopy(&Global_4540953, sVar0, 64);
		StringCopy(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_5495), Global_23270.f_5166);
	}
	StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = iParam0;
	Global_23270.f_5480[Global_23270.f_5166] = 32;
	Global_23270.f_5166++;
}

void func_358(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_1), sParam0, 16);
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5526[0] = iParam0;
	Global_23270.f_5526[1] = iParam1;
	Global_23270.f_5526[2] = iParam2;
	Global_23270.f_5526[3] = iParam3;
	Global_23270.f_5526[4] = iParam4;
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5499[0] = iParam0;
	Global_23270.f_5499[1] = iParam1;
	Global_23270.f_5499[2] = iParam2;
	Global_23270.f_5499[3] = iParam3;
	Global_23270.f_5499[4] = iParam4;
	Global_23270.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23270.f_5669++;
	}
}

void func_361(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23270.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695070[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_5532[iVar0] = 0;
		Global_23270.f_5670[iVar0] = 0;
		Global_23270.f_5799[iVar0] = 0;
		Global_23270.f_6322[iVar0] = 0f;
		Global_23270.f_5928[iVar0] = 0;
		Global_23270.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23270.f_5499[iVar0] = 0;
		Global_23270.f_5511[iVar0] = 0f;
		Global_23270.f_5505[iVar0] = -1f;
		Global_23270.f_5518[iVar0] = 0;
		Global_23270.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
		Global_23270.f_5450[iVar0] = -1;
		Global_23270.f_5465[iVar0] = 363;
		Global_23270.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23270.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540953.f_16), "", 16);
	Global_4540953.f_20 = -1;
	Global_23270 = 0;
	Global_23270.f_5661 = 0;
	Global_23270.f_5662 = 0;
	Global_23270.f_5663 = 0;
	Global_23270.f_5665 = 0;
	Global_23270.f_5666 = 0;
	Global_23270.f_5667 = 0;
	Global_23270.f_5664 = 0;
	Global_23270.f_6317 = 0;
	Global_23270.f_6457 = 0;
	Global_23270.f_6182 = 0;
	Global_23270.f_6181 = 0;
	Global_23270.f_6183 = 0;
	StringCopy(&(Global_23270.f_5081), "", 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = 0;
	Global_23270.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_5165 = 0;
	StringCopy(&(Global_4540953.f_21), "", 16);
	Global_4540953.f_61 = 0;
	Global_4540953.f_62 = 0;
	Global_4540953.f_63 = 0;
	Global_4540953.f_64 = 0;
	Global_4540953.f_65 = 0;
	Global_4540953.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540953.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540953.f_67 = 0;
	StringCopy(&(Global_23270.f_1), "", 16);
	Global_23270.f_5517 = 0f;
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_6187 = 0;
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = 0;
	Global_23270.f_6185 = 0;
	Global_23270.f_5166 = 0;
	Global_23270.f_5167 = 0;
	Global_23270.f_5668 = 10;
	Global_23270.f_5669 = 0;
	Global_23270.f_6319 = 0f;
	Global_23270.f_6320 = 0f;
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	Global_23270.f_6173 = 0f;
	Global_23270.f_6174 = 0;
	Global_23270.f_6176 = 0;
	Global_23270.f_6175 = 0;
	Global_23270.f_6177 = 0;
	Global_23270.f_6178 = 0;
	Global_23270.f_6179 = 0;
	Global_23270.f_6180 = 0;
	Global_23270.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23270.f_6451[iVar0] = -1;
		Global_23270.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23270.f_5524 = 0f;
	Global_23270.f_5495 = 0;
	Global_23270.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6458)
	{
		Global_23270.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_8867 = 0;
	Global_23270.f_8862 = 0;
	Global_23270.f_8872 = 0;
	Global_23270.f_8877 = 0;
	Global_23270.f_8882 = 0;
	Global_23270.f_8884 = 0;
	Global_23270.f_8890 = 0;
	Global_23267 = 0.05f;
	Global_23268 = 0.05f;
	Global_23269 = 0.225f;
	fVar2 = unk_0xE5A34D583EE533B7(0);
	if (bParam0)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23269 = 0.225f;
	}
}

void func_362(bool bParam0)
{
	if (!bParam0)
	{
		Global_112290 = unk_0xA5E11AF0A2B928C1() + 250;
	}
	Global_112287 = bParam0;
}

int func_363(char* sParam0, int iParam1)
{
	if (func_276() < func_233(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0xA26A9A07F761D8F8() && func_364(unk_0x93E99A2DBCBA9CFA()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_365(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0x2BBF749E555360DC(func_50(unk_0xC1A5EC5C986B98AD(), 0, 0)))
	{
	}
	else if (!unk_0x7BB3D8F4F6310EB8(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_110(bParam1), 3) && unk_0xF5F493B789EA063E(iParam0, joaat("script_task_play_anim")) != 1)
	{
		if (func_551())
		{
			if (iParam0 == unk_0xC1A5EC5C986B98AD())
			{
				if (!func_205(unk_0x93E99A2DBCBA9CFA()))
				{
					iVar0 = unk_0xAC464F61BE9FD50D(unk_0xC1A5EC5C986B98AD(), 6);
					if (!func_524(256))
					{
						func_196(256);
						iLocal_86 = iVar0;
						iLocal_87 = unk_0xEDEBC30DEBDF84C8(unk_0xC1A5EC5C986B98AD(), 6);
						unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 6, 1, 0, 0);
						func_196(1024);
					}
				}
				unk_0x3EE48ADC8C7F5CC4(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3EE48ADC8C7F5CC4(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x3EE48ADC8C7F5CC4(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x7BB3D8F4F6310EB8(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_366(bParam1), 3))
		{
			if (unk_0x92377426879E21FF(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_366(bParam1)) >= 0.95f)
			{
				unk_0x3EE48ADC8C7F5CC4(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_110(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x7BB3D8F4F6310EB8(iParam0, func_50(unk_0xC1A5EC5C986B98AD(), 0, 0), func_110(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_366(bool bParam0)
{
	if (!func_491(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(0);
		}
		else
		{
			return func_45(1);
		}
	}
	if (bParam0)
	{
		return func_46(0);
	}
	return func_46(1);
}

void func_367(int iParam0)
{
	*iParam0 = -15;
}

int func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_335(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_336(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_339(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_338(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_337(iParam0);
	if (iVar5 < 1 || iVar5 > func_348(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_369()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	unk_0x90B639B1CCB1446C(iLocal_96);
	if (!unk_0x70ACD9400516DB25(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_370()
{
	if (func_371(0, -1, 0) && unk_0xF6AFEDAAE44A2159("SCRIPT\HUD_321_GO", 1, -1))
	{
		return 1;
	}
	return 0;
}

bool func_371(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_330(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6078[iVar0 /*4*/])))
	{
		unk_0xA3C681843B51A4CC(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
		Global_23270.f_6071[iVar0] = 1;
		if (!unk_0x7F29CD9C0A5C1E44(&(Global_23270.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xEBA1698B77FD0A86("CommonMenu", 0);
	Global_23270.f_6057[iVar0] = 1;
	if (!unk_0x9812897315C21146("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xEBA1698B77FD0A86("MPShopSale", 0);
		Global_23270.f_6064[iVar0] = 1;
		if (!unk_0x9812897315C21146("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_372(&(Global_23270.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_372(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				*uParam0 = unk_0x2B4645565204EA06(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam0))
					{
						uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_373()
{
	if (!func_551())
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_96))
	{
		iLocal_60 = unk_0x2935B4D6CE81318D(iLocal_96);
	}
}

void func_374()
{
	int iVar0;
	
	if (!func_551())
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				Local_56 = { unk_0x30BE8A934C020461(iVar0, 1) };
			}
		}
	}
}

void func_375(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_330(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23270.f_8892)
	{
		unk_0x833DC7C29EA6EEF3(15);
		Global_23270.f_8892 = 0;
	}
	unk_0x314A52B02A05EEDE(0f);
	if (Global_23270.f_6071[iVar0])
	{
		unk_0x32FF0B09752F532B(9, 0);
		Global_23270.f_6071[iVar0] = 0;
	}
	if (Global_23270.f_6057[iVar0])
	{
		unk_0xFBA79BC11313B81D("CommonMenu");
		Global_23270.f_6057[iVar0] = 0;
	}
	if (Global_23270.f_6064[iVar0])
	{
		unk_0xFBA79BC11313B81D("MPShopSale");
		Global_23270.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_376(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_376(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5FAF55B1F052A2E6(*uParam0))
		{
			unk_0xD0AE101DBAA43C98(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_377()
{
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iLocal_99 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (!iLocal_99 == 0)
				{
					if ((unk_0xFBD273FDBCF0C5BD(iLocal_99, 0) && !unk_0x584CD220C093B0B4(iLocal_99)) && !unk_0x71E7779DA475F63F(iLocal_99))
					{
						if (func_91(&iLocal_99))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_378()
{
	if (iLocal_72 == 0)
	{
		if (!func_491(iLocal_51, 1) && !func_491(iLocal_51, 16))
		{
			if (func_379(0))
			{
				func_482(&iLocal_51, 1);
			}
		}
		if (!func_491(iLocal_51, 4) && !func_491(iLocal_51, 64))
		{
			if (func_379(2))
			{
				func_482(&iLocal_51, 4);
			}
		}
		if (!func_491(iLocal_51, 8) && !func_491(iLocal_51, 128))
		{
			if (func_379(1))
			{
				func_482(&iLocal_51, 8);
			}
		}
	}
}

int func_379(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_186(iParam0) };
	Var3 = { unk_0x30BE8A934C020461(iLocal_99, 1) };
	if (iLocal_308[iParam0] == 0)
	{
		if (unk_0x504B9BB48D41C264(iLocal_99) == joaat("tyrant"))
		{
			iLocal_308[iParam0] = unk_0x838DBB32E30CAAFD(Var0, Var3, 0.1f, 511, iLocal_99, 3);
		}
		else if (((unk_0x504B9BB48D41C264(iLocal_99) == joaat("casco") || unk_0x504B9BB48D41C264(iLocal_99) == joaat("feltzer3")) || unk_0x504B9BB48D41C264(iLocal_99) == joaat("fagaloa")) || unk_0x504B9BB48D41C264(iLocal_99) == joaat("warrener2"))
		{
			iLocal_308[iParam0] = unk_0x838DBB32E30CAAFD(Var0, Var3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = unk_0x838DBB32E30CAAFD(Var0, Var3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (unk_0x5A2817B89A8ECCD2(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_308[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_380(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_308[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_491(iLocal_51, 16))
			{
				func_482(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_491(iLocal_51, 128))
			{
				func_482(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_491(iLocal_51, 64))
			{
				func_482(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_491(iLocal_51, 32))
			{
				func_482(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_381()
{
	if (func_386() && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		iLocal_295 = 9;
		func_384(iLocal_96);
		func_384(unk_0xC1A5EC5C986B98AD());
		func_382();
		func_40(&uLocal_104);
	}
}

void func_382()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0xF57C1326FD40C8A7(uLocal_102))
	{
		uLocal_102 = unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0xF57C1326FD40C8A7(uLocal_103))
	{
		uLocal_103 = unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_383(&Var0, &Var7);
	unk_0x5BF3CF5BAF6ABBBB(uLocal_102, Var0);
	unk_0xB346B70AE8C42AD8(uLocal_102, Var0.f_3, 2);
	unk_0xE3BD36CCB5EB72F2(uLocal_102, Var0.f_6);
	unk_0x5BF3CF5BAF6ABBBB(uLocal_103, Var7);
	unk_0xB346B70AE8C42AD8(uLocal_103, Var7.f_3, 2);
	unk_0xE3BD36CCB5EB72F2(uLocal_103, Var7.f_6);
	unk_0xEEF11E0DB5769366(uLocal_102, 1);
	unk_0xEEF11E0DB5769366(uLocal_103, 0);
	unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
}

void func_383(var uParam0, var uParam1)
{
	switch (func_23())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_384(int iParam0)
{
	var uVar0;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		unk_0x63EF69C6969A3D26(&uVar0);
		unk_0xDBC7406226B5540E(&uVar0);
		if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
		{
			unk_0x6FE9A0C01D25F413(0, 0, 16842752);
		}
		unk_0x7D9A648CC1936BDA(0, func_385(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0xF2CFC6EC8C85FA78(uVar0);
		unk_0x3D7110D966B0CEA2(iParam0, uVar0);
		unk_0x63EF69C6969A3D26(&uVar0);
	}
}

Vector3 func_385()
{
	switch (func_23())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_386()
{
	return unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), func_388()) < (func_387() * func_387());
}

float func_387()
{
	switch (func_23())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_388()
{
	switch (func_23())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_389()
{
	func_331();
	func_404();
	if (!func_10(&uLocal_107))
	{
		func_472(&uLocal_107);
	}
	if (func_403())
	{
		return;
	}
	if (!func_10(&uLocal_116))
	{
		func_472(&uLocal_116);
	}
	if (func_377() && unk_0xE0D346789C5160EB(iLocal_96, iLocal_99, 0))
	{
		if (unk_0xF193A4B306E6BF93(iLocal_99) && unk_0xD565A4F8A4D47FCB(iLocal_99))
		{
			if ((func_396() && !func_386()) && !func_395())
			{
				func_394();
				if (func_7(&uLocal_116) > 2.5f)
				{
					uLocal_85 = unk_0xCE17E20C49A29678(unk_0x30BE8A934C020461(iLocal_99, 0), 40f, 40f, 40f, unk_0xD850DD08D5434072(iLocal_99), 0, 7);
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 896);
					func_482(&iLocal_49, 2048);
					iLocal_100 = 0;
					unk_0xDA95D0C19E737224("ProstituteInPlay", &uLocal_307);
					unk_0x0133FF6E23A1DCA4(1, uLocal_307, joaat("player"));
					unk_0x8386356641D0DED1(iLocal_96, uLocal_307);
					func_492("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_128();
					func_393();
					iLocal_83 = 3;
					if (func_48(0, 1))
					{
						unk_0xEF54B7007CB2210B(0);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()) && func_7(&uLocal_107) > 15f) && func_392())
				{
					if (!func_491(iLocal_50, 4096))
					{
						func_350("PROS_SPOT", -1);
						func_482(&iLocal_50, 4096);
					}
					func_391();
					func_40(&uLocal_107);
				}
				func_40(&uLocal_116);
			}
		}
		else
		{
			func_40(&uLocal_116);
			func_390();
		}
	}
	else if (!func_386())
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_96))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_96))
			{
				unk_0x909F139DC199D8E0(iLocal_96);
			}
		}
		func_473(0);
	}
}

void func_390()
{
	iLocal_51 = 0;
	iLocal_308[0] = 0;
	iLocal_308[1] = 0;
	iLocal_308[2] = 0;
	iLocal_308[3] = 0;
}

void func_391()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	if (!unk_0x70ACD9400516DB25(iLocal_96))
	{
		unk_0x824D23CC0FE1835A(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_392()
{
	if (!func_491(iLocal_51, 256))
	{
		return 1;
	}
	return func_491(iLocal_51, 32);
}

void func_393()
{
	if (func_551())
	{
		unk_0x598D91BBD045C1F3(iLocal_96, 229, 1);
		unk_0x598D91BBD045C1F3(iLocal_96, 26, 1);
		unk_0x598D91BBD045C1F3(iLocal_96, 115, 1);
		unk_0xC5B2830898581862(iLocal_96, 1);
	}
}

void func_394()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!func_491(iLocal_49, 2097152))
	{
		if (unk_0xA5E11AF0A2B928C1() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				Var0 = { unk_0x30BE8A934C020461(iLocal_99, 1) };
				unk_0xDE209AFE421606C6(Var0, &fVar6, 0, 0);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0x7394CB479CCA24AF(iLocal_99, 0f, 0f, -2f) };
				iLocal_100 = unk_0xD8D74C74516FDA20(Var0, Var3, 2f, 511, iLocal_99, 7);
			}
			else if (unk_0x1DE3A9BDC47A9E05(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_40(&uLocal_116);
					}
				}
				iLocal_84 = unk_0xA5E11AF0A2B928C1() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

int func_395()
{
	int iVar0;
	
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		if (!unk_0x9CFCDD9C62B56708(iVar0, 0, 0))
		{
			if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()) || unk_0x1589BC95A4C50F21(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_396()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iLocal_99 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		if (unk_0x23AEDAC482996A1A(Var1, func_65(0), 12f, 0) || unk_0x23AEDAC482996A1A(Var1, func_65(1), 12f, 0))
		{
			return 0;
		}
		if (func_402())
		{
			return 0;
		}
		if (func_401(iLocal_99, &Var4))
		{
			if (!func_400(Var4))
			{
				if (!func_399(Var1) || func_398(Var1))
				{
					return 0;
				}
			}
		}
		if (func_90(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x73D13C05CA29773A(iLocal_96, iLocal_99, 0, 0, 0))
		{
			return 0;
		}
		unk_0x09A96992F143AC53(1);
		if (unk_0x4CC2E3CEA74EF758(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				if (!unk_0x055111B11E6624FD(iVar0, 0))
				{
					if (unk_0xC832FC847E3442DA(iVar0, iLocal_99, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_492("NO VEHICLES FOUND");
			}
		}
		iVar7 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
		if (!iVar7 == 0)
		{
			func_492("IN AN INTERIOR");
			return 0;
		}
		if (func_397())
		{
			return 0;
		}
	}
	return 1;
}

int func_397()
{
	func_482(&iLocal_51, 256);
	if (!func_491(iLocal_51, 2))
	{
		if (func_379(3))
		{
			func_482(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_378();
	}
	return 0;
}

int func_398(struct<3> Param0)
{
	if (((((((((unk_0x2A488C176D52CCA5(Param0, 491.76f, -515.73f, 29.51f) <= 12f || unk_0x2A488C176D52CCA5(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_399(struct<3> Param0)
{
	if ((((((unk_0x2A488C176D52CCA5(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || unk_0x2A488C176D52CCA5(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_482(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_400(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xCF5B31C4FCE3C0B1(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1, 1, 1077936128, 0);
	unk_0xBCE3586A35418057(uVar0, &Param0);
	if (unk_0x452C74D04BD4A4C1(uVar0))
	{
		if (!unk_0xBD0716EB92E5A53F(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0xBD0716EB92E5A53F(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0xCF5B31C4FCE3C0B1(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1, 8, 1077936128, 0);
		unk_0xBCE3586A35418057(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, 0f, -2f, 0f) };
	if (unk_0x4EEF3473B7E707F8(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x4EEF3473B7E707F8(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x4EEF3473B7E707F8(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x4EEF3473B7E707F8(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_402()
{
	return Global_75693;
}

int func_403()
{
	if (unk_0x24B651D85CCE5EB4(joaat("carwash1")) > 0 || unk_0x24B651D85CCE5EB4(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_404()
{
	if (!func_491(iLocal_49, 128))
	{
		func_405(39, 1);
		func_405(40, 1);
		func_405(41, 1);
		func_405(42, 1);
		func_405(43, 1);
		func_405(44, 1);
		func_482(&iLocal_49, 128);
	}
}

void func_405(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_409(iParam0, 2, 1))
		{
			func_408(iParam0, 2, 1);
		}
	}
	else if (func_409(iParam0, 2, 1))
	{
		func_406(iParam0, 2, 1);
	}
}

void func_406(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_153() == 0)
		{
			uVar0 = func_141(func_407(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, bParam1);
			func_138(func_407(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12385;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

void func_408(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_153() == 0)
		{
			uVar0 = func_141(func_407(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, bParam1);
			func_138(func_407(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_409(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_153() == 0)
		{
			return BitTest(func_141(func_407(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_410(var uParam0)
{
	if (func_491(iLocal_49, 2))
	{
		if (!func_63())
		{
			return;
		}
		func_100(1);
	}
	func_68();
	func_542();
	if (func_551())
	{
		func_536(uParam0);
	}
}

void func_411()
{
	if (!unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		if (unk_0xEAEF747543427AC5(iLocal_96, unk_0xC1A5EC5C986B98AD(), 5f, 5f, 5f, 0, 1, 0) || func_491(iLocal_49, 8192))
		{
			unk_0x8B438725D591ED78(0, 101, 1);
			unk_0x8B438725D591ED78(0, 74, 1);
			unk_0x4150CF46B891FFF5(0, 51);
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x3C3D6D026CF7F51B(iLocal_96, 0))
			{
				unk_0x73562E6072D7A39D(iLocal_96, 50);
				unk_0x4D59607617EE1F59(iLocal_96, 5f);
				if (func_491(iLocal_49, 16))
				{
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (unk_0xFBD273FDBCF0C5BD(iLocal_99, 0))
				{
					if (unk_0x44A6C9475C859B45(iLocal_96, iLocal_99) && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_99, 0))
					{
						func_492("***** prostitute IN VEHICLE****** ");
						if (func_491(iLocal_49, 8))
						{
							if (unk_0xA6FA26A80B445074(func_92()))
							{
								if (func_428(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_427(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_426(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_425(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_424(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_423(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_422(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_421(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_420(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_419(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_418(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_417(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else if (func_416(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								}
								else if (func_415(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								}
								else if (func_414(iLocal_99))
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								}
								else
								{
									unk_0x8C1E89F413409B43(iLocal_96, unk_0x14580F20CBCE4FA9("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_551())
						{
							unk_0x85BAE84748AD1A23(iLocal_96, 0, 0);
						}
						else
						{
							unk_0x85BAE84748AD1A23(iLocal_96, 1, 1);
						}
						func_182(iLocal_96, 0);
						func_391();
						iLocal_64 = unk_0xA5E11AF0A2B928C1();
						func_40(&uLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_492("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_413(iLocal_96, unk_0xC1A5EC5C986B98AD(), 1) > 11f || func_412(20f)) || !unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_99, 0))
				{
					func_115(&uLocal_113);
					if (!unk_0x3C3D6D026CF7F51B(iLocal_96, 0))
					{
						unk_0x909F139DC199D8E0(iLocal_96);
						func_473(0);
						func_492("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (!unk_0xFBD273FDBCF0C5BD(iLocal_99, 0))
					{
						iLocal_99 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
					}
					else if (!unk_0x73D13C05CA29773A(iLocal_96, iLocal_99, 0, 0, 0))
					{
						if (!func_112())
						{
							if (!func_491(iLocal_75, 1))
							{
								func_40(&uLocal_119);
								func_482(&iLocal_75, 1);
							}
							else if (func_7(&uLocal_119) > 20f)
							{
								func_126();
								func_492("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_491(iLocal_75, 1))
		{
			func_492("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0x909F139DC199D8E0(iLocal_96);
			func_96(15);
		}
	}
}

bool func_412(float fParam0)
{
	if (!func_10(&uLocal_113))
	{
		func_40(&uLocal_113);
	}
	return func_121(&uLocal_113) > fParam0;
}

float func_413(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

int func_414(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -1949393167:
				return 1;
				break;
			}
	}
	return 0;
}

int func_415(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -1901288301:
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -1297908787:
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -627376728:
				return 1;
				break;
			}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

int func_420(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_421(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_422(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case -1174301217:
				return 1;
				break;
			}
	}
	return 0;
}

void func_429(var uParam0)
{
	int iVar0;
	
	if (!func_438(0))
	{
		return;
	}
	if (!func_491(iLocal_49, 16))
	{
		unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 0);
		func_482(&iLocal_49, 16);
	}
	if (!func_10(&uLocal_113))
	{
		func_472(&uLocal_113);
	}
	if (func_121(&uLocal_113) >= 20f || !unk_0xEAEF747543427AC5(iLocal_96, unk_0xC1A5EC5C986B98AD(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_491(iLocal_75, 524288))
		{
			func_115(&uLocal_113);
			iLocal_295 = 6;
		}
		else if (func_437())
		{
			func_40(&uLocal_113);
			func_482(&iLocal_75, 524288);
		}
	}
	func_69(iLocal_96);
	if (((unk_0xEAEF747543427AC5(iLocal_96, unk_0xC1A5EC5C986B98AD(), 3f, 3f, 3f, 0, 1, 0) || func_491(iLocal_75, 1)) && !func_217(0)) && !func_402())
	{
		if (!unk_0x73D13C05CA29773A(iLocal_96, iLocal_99, 0, 0, 0))
		{
			if (!func_112())
			{
				if (!func_491(iLocal_75, 1))
				{
					func_40(&uLocal_119);
					func_482(&iLocal_75, 1);
				}
				else if (func_7(&uLocal_119) > 10f)
				{
					func_68();
					unk_0x909F139DC199D8E0(iLocal_96);
					func_492("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_430();
		}
	}
	else if (func_470("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_468();
		if (func_551())
		{
			iVar0 = unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_play_anim"));
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_430()
{
	char* sVar0;
	
	if (iLocal_295 != 5 && func_363(&sVar0, 0))
	{
		func_433();
		if (func_431(iLocal_74, 1) || unk_0x56092233CEE9770B(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_482(&iLocal_49, 8192);
			func_40(&uLocal_113);
		}
		if (func_491(iLocal_49, 8192))
		{
			func_468();
			Global_32315 = 1;
			Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_431 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_enter_vehicle")) != 1 && !unk_0xE0D346789C5160EB(iLocal_96, unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1))
				{
					unk_0xD30E9CAE1FEA1C7E(iLocal_96, iLocal_99, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_50(unk_0xC1A5EC5C986B98AD(), 1, 0);
			unk_0x28818732C8F0F80E(sLocal_63);
			sLocal_63 = func_50(unk_0xC1A5EC5C986B98AD(), 0, 1);
			unk_0x28818732C8F0F80E(sLocal_63);
			func_40(&uLocal_107);
			iLocal_295 = 5;
		}
	}
}

int func_431(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_217(0))
	{
		return 0;
	}
	if (unk_0x2FECE8D166B3056B())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] == 1 && Global_44000[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44000[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44000[iVar0 /*32*/].f_5 = 1;
			Global_44000[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44000[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44000[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_433()
{
	if (Global_32315)
	{
		if (unk_0xFEE065E56A9BEF3F())
		{
			return;
		}
		unk_0x8B438725D591ED78(0, 101, 1);
		unk_0x8B438725D591ED78(0, 74, 1);
		unk_0x4150CF46B891FFF5(0, 51);
		if (!func_491(iLocal_49, 8192))
		{
			if (iLocal_74 == -1)
			{
				func_435(&iLocal_74, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_434(iLocal_74, 0))
	{
		func_468();
	}
}

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_432(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_44000[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_44000[iVar0 /*32*/].f_12)
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[iVar0 /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		iVar1 = unk_0x6A92D111B5409879(0);
	}
	else
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[iVar0 /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		if (Global_44000[iVar0 /*32*/].f_30)
		{
			unk_0x76B34CBB6F5FA1BB(&(Global_44000[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x48849374B34BB7B9(&(Global_44000[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x6A92D111B5409879(0);
	}
	return iVar1;
}

void func_435(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		if (!*iParam0 == -1)
		{
			func_436(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/] = 1;
			Global_44000[iVar0 /*32*/].f_1 = Global_44201;
			Global_44201++;
			Global_44000[iVar0 /*32*/].f_4 = 0;
			Global_44000[iVar0 /*32*/].f_29 = 0;
			Global_44000[iVar0 /*32*/].f_5 = 0;
			Global_44000[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44000[iVar0 /*32*/].f_6 = iParam3;
			Global_44000[iVar0 /*32*/].f_31 = unk_0xAF908D5E2416DA93();
			Global_44000[iVar0 /*32*/].f_7 = 0;
			Global_44000[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x2AC37494BBF1DB16(sParam4))
			{
				Global_44000[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44000[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[iVar0 /*32*/].f_12 = 0;
				Global_44000[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44000[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_436(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_432(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_437()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x7DE17ACDD8BA2642(iLocal_96) || unk_0x66599E73DBA5A850(iLocal_96))
	{
		return 1;
	}
	if (!func_551())
	{
		func_68();
		if (unk_0x3C3D6D026CF7F51B(iLocal_96, 1))
		{
			unk_0x984708151807AC6D(iLocal_96, 1193033728, 0);
		}
		else if (func_491(iLocal_49, 4194304))
		{
			iVar0 = unk_0x15A88CFAAFFC6C4B(8, 11);
			unk_0xDBC7406226B5540E(&uVar1);
			unk_0x3EE48ADC8C7F5CC4(0, func_67(iLocal_293), func_66(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, func_67(iLocal_293), func_66(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uVar1);
			unk_0x3D7110D966B0CEA2(iLocal_96, uVar1);
			unk_0x63EF69C6969A3D26(&uVar1);
		}
		return 1;
	}
	if (unk_0x3C3D6D026CF7F51B(iLocal_96, 1))
	{
		if (unk_0xB6B927AA8C3DAD36(iLocal_96))
		{
			unk_0x984708151807AC6D(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_491(iLocal_49, 4194304))
			{
				func_68();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
			break;
		
		case 2:
			if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_play_anim")) == 7)
				{
					iVar0 = unk_0x15A88CFAAFFC6C4B(8, 11);
					unk_0x3EE48ADC8C7F5CC4(iLocal_96, func_67(iLocal_293), func_66(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_438(bool bParam0)
{
	if (unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		return 0;
	}
	if (func_491(iLocal_49, 8192))
	{
	}
	if (func_413(iLocal_96, unk_0xC1A5EC5C986B98AD(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 0;
	}
	if (func_551())
	{
		if (unk_0x94365836BD1EA548(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0, 1) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0xDC58AE028CB223BA(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_90(unk_0x30BE8A934C020461(iLocal_96, 1), 1106247680))
	{
		if (!func_491(iLocal_50, 8192) && !unk_0x6AE0E79C82A558ED(unk_0xC1A5EC5C986B98AD()))
		{
			func_350("PROS_COPS", -1);
			func_482(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_377())
	{
		if (!func_551())
		{
			if ((!iLocal_88 && !Global_112695) && func_440(unk_0xC1A5EC5C986B98AD(), 0) == -1)
			{
				func_350("PROS_CAR", -1);
				iLocal_88 = 1;
			}
			func_439();
		}
		else if (!func_524(4096))
		{
			func_350("PROS_CAR", -1);
			func_196(4096);
		}
		return 0;
	}
	return 1;
}

void func_439()
{
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		return;
	}
	if (!func_491(iLocal_49, 1))
	{
		if (!unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()) && !unk_0x70ACD9400516DB25(iLocal_96))
		{
			unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_482(&iLocal_49, 1);
		}
	}
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(iParam0, iParam1))
		{
			iVar0 = unk_0x95DC39736F6748E3(iParam0, iParam1);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				iVar1 = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9CFCDD9C62B56708(iVar0, iVar3, 0))
					{
						if (unk_0xA66E176E5772E965(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_441()
{
	if (func_438(0))
	{
		func_430();
		if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_perform_sequence")) == 7 && !func_491(iLocal_49, 8192))
		{
			if (func_72(1))
			{
				func_115(&uLocal_113);
				iLocal_64 = unk_0xA5E11AF0A2B928C1();
				func_492("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		unk_0x909F139DC199D8E0(iLocal_96);
		func_96(15);
	}
}

void func_442(var uParam0)
{
	if (func_438(0))
	{
		func_430();
		if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_perform_sequence")) == 7 || func_491(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_412(20f))
		{
			func_115(&uLocal_113);
			func_473(0);
		}
		else
		{
			func_443(uParam0);
		}
	}
	else
	{
		unk_0x909F139DC199D8E0(iLocal_96);
		func_96(15);
	}
}

void func_443(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!unk_0x7DE17ACDD8BA2642(iLocal_99))
	{
		return;
	}
	unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iLocal_99), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0x7394CB479CCA24AF(iLocal_99, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0x7394CB479CCA24AF(iLocal_99, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0x30BE8A934C020461(iLocal_96, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_enter_vehicle")) != 1 || !func_491(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_93, Var9) > 0f)
	{
		if (func_551())
		{
			if (!unk_0x1AFE963DA61006ED(iLocal_96))
			{
				unk_0x85BAE84748AD1A23(iLocal_96, 0, 1);
			}
			func_453(&uLocal_287, func_67(iLocal_293));
			func_447(uParam0, 1);
			func_444(&uLocal_287, uParam0);
		}
		unk_0xDBC7406226B5540E(&uVar18);
		unk_0x7D9A648CC1936BDA(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0x195020A03AE6C628(0, unk_0x985D9D5ED4D5145A(unk_0xC1A5EC5C986B98AD(), 31086, 0f, 0f, 0f), 0);
		unk_0xF2CFC6EC8C85FA78(uVar18);
		unk_0x3D7110D966B0CEA2(iLocal_96, uVar18);
		unk_0x63EF69C6969A3D26(&uVar18);
		Local_93 = { Var9 };
	}
}

void func_444(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xB71C73D0269747D5((*uParam0)[iVar0]))
		{
			func_445(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_445(var uParam0, char* sParam1)
{
	func_446(uParam0, 1, -1, sParam1, 0);
}

void func_446(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x4310A0DB886F9FED(sParam3, "NULL"))
					{
						if (unk_0x4310A0DB886F9FED(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*18*/], bParam1);
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_447(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_449(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_448(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_448(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_449(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_450(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_450(var uParam0)
{
	func_451(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_451(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_452(uParam0))
		{
			case 0:
				unk_0xE0A291F406691F03(uParam2);
				break;
			
			case 1:
				unk_0x0B34FA69ECCE3927(uParam1);
				break;
			
			case 2:
				unk_0x1401DAE4BB7FBFCD(uParam1);
				break;
			
			case 3:
				unk_0xFBA79BC11313B81D(uParam1);
				break;
			
			case 4:
				unk_0xC062EB7C484973F7(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x0DE8FEF68764819C(sParam1);
				break;
			
			case 6:
				unk_0x214F8822B61C46FE();
				break;
			
			case 7:
				unk_0xA46627DF9B8B1FBE(uParam2);
				break;
			
			case 8:
				unk_0x32FF0B09752F532B(uParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0x42665493F0D75951();
				break;
			
			default:
				break;
		}
	}
}

int func_452(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

int func_453(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xB71C73D0269747D5((*uParam0)[iVar0]))
		{
			if (unk_0x4310A0DB886F9FED((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_454(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_454(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0xB71C73D0269747D5((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_455(var uParam0)
{
	char* sVar0;
	
	if (func_438(1))
	{
		if (!func_10(&uLocal_113))
		{
			func_472(&uLocal_113);
		}
		func_482(&iLocal_49, 4);
		Global_32316 = 1;
		func_430();
		if (func_471(&uLocal_113, 2f) || func_491(iLocal_49, 8192))
		{
			func_482(&iLocal_49, 2);
			if (func_363(&sVar0, 0))
			{
				unk_0xAD4CEC14FE6404F6(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xB3FF3200DBD1FC87(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iLocal_96, -1, 2048, 4);
				func_443(uParam0);
				func_482(&iLocal_49, 4);
				Global_32315 = 1;
				Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_431 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (unk_0x4310A0DB886F9FED(func_467(&sVar0), "PIM_HHIDCR"))
				{
					func_466(&sVar0, 30000);
					func_464(1);
				}
				else
				{
					func_350(&sVar0, -1);
				}
				if (!unk_0x2AC37494BBF1DB16(&sVar0) && unk_0x4310A0DB886F9FED(&sVar0, "PROS_NO_MONEY"))
				{
					func_456();
				}
				func_96(0);
				iLocal_296 = 0;
				func_482(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_32315 = 0;
				Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_431 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_32316 = 0;
	}
}

void func_456()
{
	if (!func_524(64))
	{
		func_457(0, 31, 5);
		func_196(64);
	}
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x913F68714030C692())
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8() && func_461(unk_0x93E99A2DBCBA9CFA(), 1, 0))
	{
		return;
	}
	if (unk_0x51EB177CA0562B62(2, 199) || unk_0x992AACDC3C066F55(2, 199))
	{
		return;
	}
	if (unk_0xD7863C03D2155822() != 0)
	{
		return;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return;
	}
	if (unk_0xB0C54EB77AA16156())
	{
		return;
	}
	if (unk_0x47F8B78DC1737D5C())
	{
		return;
	}
	if (func_460())
	{
		return;
	}
	if (!func_458())
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8() || iParam0)
	{
		if (!Global_100733.f_1474 && !unk_0x4136116828BCAAB6())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2695712 = iParam1;
			Global_100733.f_1474 = 1;
			Global_100733.f_1475 = iParam2;
		}
	}
}

int func_458()
{
	if (func_459())
	{
		return 0;
	}
	if (unk_0x3FFDF8D1413D95DE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_459()
{
	return Global_2695031;
}

bool func_460()
{
	return Global_2695819;
}

int func_461(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_462(int iParam0)
{
	return func_463(iParam0);
}

var func_463(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

void func_464(int iParam0)
{
	unk_0x9D7DD9F2D270206C(3, 21, 200, 0, 0);
	if (iParam0 && !func_465())
	{
		unk_0x531D638530A8DB97(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_465()
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

void func_466(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 0, iParam1);
}

char* func_467(char* sParam0)
{
	return sParam0;
}

void func_468()
{
	if (iLocal_74 != -1)
	{
		func_436(&iLocal_74);
	}
}

void func_469(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(iParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(iParam2, 1);
			}
		}
	}
}

int func_470(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

int func_471(var uParam0, float fParam1)
{
	if (func_225(uParam0, fParam1))
	{
		func_115(uParam0);
		return 1;
	}
	return 0;
}

void func_472(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_40(uParam0);
	}
}

void func_473(int iParam0)
{
	bool bVar0;
	
	func_126();
	if (iParam0 || iLocal_72 == 0)
	{
		bVar0 = true;
		if (func_551())
		{
			bVar0 = false;
		}
		func_106(bVar0);
		func_96(14);
	}
	else
	{
		func_106(0);
		func_96(15);
	}
}

int func_474()
{
	if ((((((func_481() || func_480()) || func_479()) || func_478()) || func_475()) || Global_2625211) || Global_2625211.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_475()
{
	if (func_477() || func_476())
	{
		return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_95 == 8;
	}
	return 0;
}

var func_476()
{
	return Global_2683862.f_735;
}

var func_477()
{
	return BitTest(Global_2683862.f_2, 11);
}

var func_478()
{
	return BitTest(Global_2683862, 5);
}

var func_479()
{
	return BitTest(Global_2683862, 2);
}

var func_480()
{
	return BitTest(Global_2683862, 20);
}

var func_481()
{
	return Global_2683862.f_698;
}

void func_482(int iParam0, int iParam1)
{
	func_483(iParam0, iParam1);
}

void func_483(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_484()
{
	if (Global_32317)
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (!func_488())
	{
		return 0;
	}
	if (func_485())
	{
		iLocal_296 = 4;
		return 1;
	}
	return 0;
}

int func_485()
{
	int iVar0;
	
	iLocal_98 = unk_0xC9B41DD2C91B7017(unk_0x30BE8A934C020461(iLocal_96, 1), 15f, 0, 6);
	if (unk_0x7DE17ACDD8BA2642(iLocal_98) && !unk_0x055111B11E6624FD(iLocal_98, 0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_98, 0))
		{
			if (func_91(&iLocal_98) && !func_487(iLocal_98, 1))
			{
				iLocal_97 = unk_0xA66E176E5772E965(iLocal_98, -1, 0);
				if (!iLocal_97 == 0)
				{
					if (func_486(&iLocal_97))
					{
						iVar0 = unk_0x504B9BB48D41C264(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x1AFE963DA61006ED(iLocal_97))
							{
								unk_0x85BAE84748AD1A23(iLocal_97, 1, 0);
							}
							if (!unk_0x1AFE963DA61006ED(iLocal_98))
							{
								unk_0x85BAE84748AD1A23(iLocal_98, 1, 0);
							}
							unk_0xC5B2830898581862(iLocal_97, 1);
							unk_0x351E6B9FD37CFF33(iLocal_97, 0, 1);
							unk_0x351E6B9FD37CFF33(iLocal_98, 0, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_98 = 0;
	iLocal_97 = 0;
	return 0;
}

int func_486(int iParam0)
{
	if (!unk_0x66599E73DBA5A850(*iParam0))
	{
		if (unk_0xE07B92C7EA4970AA(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_487(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam0) && (!bParam1 || unk_0xFBD273FDBCF0C5BD(iParam0, 0)))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "Company_SUV"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_488()
{
	if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		return 0;
	}
	return 1;
}

int func_489()
{
	if ((!func_488() || !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) || func_491(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_491(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_100(2);
		func_492("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_490()
{
	if (!unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		if (!unk_0xC78375EA6037A7DB(iLocal_96))
		{
			if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_smart_flee_ped")) != 1)
			{
				unk_0xC5B2830898581862(iLocal_96, 0);
				unk_0x474AA9EF29305EA8(iLocal_96, 196628, 1);
				unk_0xF0654A614CC902C9(iLocal_96);
				unk_0xC6C9BF71106ABCAC(iLocal_96, unk_0xC1A5EC5C986B98AD(), 300f, -1, 1, 0);
				unk_0x71A535529C1CA5DF(iLocal_96, 1);
				func_96(15);
			}
		}
	}
}

bool func_491(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_492(char* sParam0)
{
}

int func_493()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return 0;
	}
	if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_any")) == 1)
	{
		return 0;
	}
	if (unk_0xFB006A73F8305422(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_494()
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_551())
			{
				func_453(&uLocal_287, func_67(iLocal_293));
				func_444(&uLocal_287, &uLocal_391);
				func_492("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_551())
			{
				unk_0xE5CBFFB5DE87586F(1);
				unk_0x08914D2D4A110A6F(1);
				unk_0xBDB0FB8EEE50C9CD(iLocal_96);
			}
			iLocal_300 = 1;
			break;
		
		case 1:
			if (!func_551())
			{
				if (func_495(&uLocal_391))
				{
					func_482(&iLocal_49, 4194304);
					func_492("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_551())
			{
				func_482(&iLocal_49, 4194304);
				func_492("Moving to PROSTITUTE_INIT_INIT");
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			iLocal_297 = 0;
			iLocal_69 = iLocal_297;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_296 = 0;
			iLocal_97 = 0;
			iLocal_98 = 0;
			func_492("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(iLocal_96))
			{
				if (!func_551())
				{
					unk_0xC5B2830898581862(iLocal_96, 0);
					unk_0x7C90446DDC45D9C6(iLocal_96, 0);
					func_469(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0xB6B927AA8C3DAD36(iLocal_96))
				{
					unk_0xBDB0FB8EEE50C9CD(iLocal_96);
				}
				else
				{
					unk_0xC5B2830898581862(iLocal_96, 0);
					func_469(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					unk_0x7C90446DDC45D9C6(iLocal_96, 0);
					unk_0x35962E277A6A8C3B(iLocal_96);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_495(var uParam0)
{
	return func_496(uParam0);
}

int func_496(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_497(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_497(var uParam0)
{
	return func_498(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_498(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_452(uParam0))
			{
				case 0:
					return unk_0x0CBB7C273DED26E7(uParam2);
					break;
				
				case 1:
					return unk_0x2BBF749E555360DC(uParam1);
					break;
				
				case 2:
					return unk_0xA6FA26A80B445074(sParam1);
					break;
				
				case 3:
					return unk_0x9812897315C21146(sParam1);
					break;
				
				case 4:
					return unk_0x56659E29BE303D7F(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC546C50EE3EA181E(sParam1);
					break;
				
				case 6:
					return unk_0xF6AFEDAAE44A2159(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xAF83A305E6D700D3(uParam2);
					break;
				
				case 8:
					return unk_0x578F9DB3098790E9(uParam2);
					break;
				
				case 9:
					return unk_0x399D29F9238EE6B0();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_499()
{
	if (unk_0xB53553DC4AAC7D8A())
	{
		if (func_23() == 0)
		{
			if (func_500(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0xAE770DDB34967EC3(iLocal_96, 1))
				{
					if (func_551())
					{
						unk_0x85BAE84748AD1A23(iLocal_96, 0, 0);
					}
					else
					{
						unk_0x85BAE84748AD1A23(iLocal_96, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_500(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

int func_501()
{
	if (unk_0x6ADCF24891BC416B(iLocal_96, func_65(0)))
	{
		if (unk_0xC5D34B3EA5B11070(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xC5D34B3EA5B11070(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x6ADCF24891BC416B(iLocal_96, func_65(1)))
	{
		if (unk_0xC5D34B3EA5B11070(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xC5D34B3EA5B11070(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_502()
{
	if (unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_503(unk_0xC1A5EC5C986B98AD());
	}
	else if (iLocal_294 == 3)
	{
		func_503(iLocal_97);
	}
}

void func_503(int iParam0)
{
	if (unk_0x055111B11E6624FD(iParam0, 0))
	{
		return;
	}
	if (func_551())
	{
		if (!unk_0xB6B927AA8C3DAD36(iParam0))
		{
			unk_0xBDB0FB8EEE50C9CD(iParam0);
			return;
		}
	}
	if (func_413(iParam0, iLocal_96, 1) < 30f)
	{
		if (!unk_0x7C35C412DABCB3FB(iLocal_96, iParam0))
		{
			if (func_551())
			{
				if (unk_0xB6B927AA8C3DAD36(iLocal_96))
				{
					unk_0x1F9F6C767BE640D5(iLocal_96);
					unk_0xEDB03CCB50D11479(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x1F9F6C767BE640D5(iLocal_96);
				unk_0xEDB03CCB50D11479(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x7C35C412DABCB3FB(iLocal_96, iParam0))
	{
		if (func_551())
		{
			if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				unk_0x1F9F6C767BE640D5(iLocal_96);
			}
		}
		else
		{
			unk_0x1F9F6C767BE640D5(iLocal_96);
		}
	}
}

void func_504()
{
	if (Global_32315)
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_99, 0))
		{
			if (unk_0xE0D346789C5160EB(iLocal_96, iLocal_99, 0))
			{
				func_505();
			}
		}
		return;
	}
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
	{
		return;
	}
	if (unk_0x055111B11E6624FD(iLocal_96, 0) || !unk_0x7DE17ACDD8BA2642(iLocal_96))
	{
		if (Global_32319 != unk_0xAF908D5E2416DA93() && func_491(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_96, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) < Global_32318 || Global_32318 == 0f) && iLocal_296 != 4)
	{
		Global_32318 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_96, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1));
		Global_32319 = unk_0xAF908D5E2416DA93();
		func_482(&iLocal_49, 32);
	}
	else if (Global_32319 == unk_0xAF908D5E2416DA93())
	{
		Global_32318 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_96, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_505()
{
	if (func_551())
	{
		if (unk_0xB6B927AA8C3DAD36(iLocal_96))
		{
			unk_0x992BB708B4B7A005(iLocal_96, 323, 1);
		}
	}
	else
	{
		unk_0x992BB708B4B7A005(iLocal_96, 323, 1);
	}
}

void func_506(var uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!unk_0x055111B11E6624FD(iLocal_96, 0) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (func_510())
			{
				if (func_551())
				{
					func_123(0);
					unk_0x474AA9EF29305EA8(iLocal_96, 196624, 1);
					if (!unk_0x1AFE963DA61006ED(iLocal_96))
					{
						unk_0x85BAE84748AD1A23(iLocal_96, 1, 0);
					}
					unk_0xC6C9BF71106ABCAC(iLocal_96, unk_0xC1A5EC5C986B98AD(), 300f, -1, 0, 0);
					unk_0x71A535529C1CA5DF(iLocal_96, 1);
					unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
					func_542();
					func_536(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (unk_0x7559C38E6535AB89(iLocal_96, unk_0xC1A5EC5C986B98AD(), 1))
			{
				iLocal_67++;
				if (iLocal_67 >= 2)
				{
					func_492("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_492("prostitute BEEN HIT BY PLAYER");
					unk_0x5CE354E3C73D2002(iLocal_96);
				}
			}
			else if (func_508())
			{
				func_507();
				iLocal_295 = 12;
			}
		}
	}
}

void func_507()
{
	if (unk_0x66599E73DBA5A850(iLocal_96))
	{
		return;
	}
	unk_0x90B639B1CCB1446C(iLocal_96);
	unk_0x824D23CC0FE1835A(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_508()
{
	var uVar0;
	
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 0;
	}
	if (!func_509())
	{
		return 0;
	}
	uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (!unk_0xFBD273FDBCF0C5BD(uVar0, 0))
	{
		return 0;
	}
	if (unk_0x6AE0E79C82A558ED(unk_0xC1A5EC5C986B98AD()))
	{
		return unk_0x5F4C57079510DE43(iVar0);
	}
	return 0;
}

int func_509()
{
	if (!func_551())
	{
		return 1;
	}
	else if (unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
	{
		if (unk_0xC59A2EB21A3834E2(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
		{
			if (unk_0xA66E176E5772E965(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), -1, 0) == unk_0xC1A5EC5C986B98AD())
			{
				if (unk_0xB6B927AA8C3DAD36(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
				{
					if (!unk_0x1AFE963DA61006ED(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					{
						unk_0x85BAE84748AD1A23(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0xBDB0FB8EEE50C9CD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
				}
			}
		}
		else
		{
			unk_0xCD03703A526DDC53(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
		}
	}
	return 0;
}

int func_510()
{
	struct<3> Var0;
	
	if (!func_491(iLocal_49, 4096))
	{
		if (func_413(iLocal_96, unk_0xC1A5EC5C986B98AD(), 1) < 30f)
		{
			Var0 = { unk_0x30BE8A934C020461(iLocal_96, 1) };
			if ((((((unk_0x5163C80E5057D309(88, Var0, 30f) || unk_0x5163C80E5057D309(91, Var0, 30f)) || unk_0x5163C80E5057D309(90, Var0, 30f)) || unk_0x5163C80E5057D309(104, Var0, 30f)) || unk_0x5163C80E5057D309(116, Var0, 30f)) || (unk_0x5163C80E5057D309(114, Var0, 30f) && !func_551())) || unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				if (!func_551())
				{
					unk_0xC5B2830898581862(iLocal_96, 0);
				}
				func_482(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_511()
{
	if ((unk_0x7DE17ACDD8BA2642(iLocal_96) && !unk_0x055111B11E6624FD(iLocal_96, 0)) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (func_551())
		{
			if (func_553(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x3C3D6D026CF7F51B(iLocal_96, 0))
				{
					func_106(0);
				}
				func_96(15);
				return 0;
			}
		}
		if (!unk_0x66599E73DBA5A850(iLocal_96))
		{
			if (!unk_0x3C3D6D026CF7F51B(iLocal_96, 0))
			{
				if (!func_513(9))
				{
					if (!unk_0x055111B11E6624FD(iLocal_96, 0) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (unk_0xEAEF747543427AC5(iLocal_96, unk_0xC1A5EC5C986B98AD(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_492("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_512() || unk_0xB53553DC4AAC7D8A()))
				{
					func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_492("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_513(9) && !func_513(5))
			{
				return 1;
			}
			else if (!(func_512() || (unk_0xB53553DC4AAC7D8A() && !func_403())))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0);
				func_96(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_492("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x7DE17ACDD8BA2642(iLocal_96))
	{
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		func_492("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_512()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_514(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_514(int iParam0)
{
	return func_515(iParam0, Global_43257);
}

int func_515(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_516()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x89DE709C9F3052C5(1))
	{
		iVar1 = unk_0xB09B723333956A0B(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x11DE375695504B75(1, iVar0, &Var2, 2);
			if (Var2.f_0 == -1763294690)
			{
				if (Var2.f_1 == unk_0x93E99A2DBCBA9CFA())
				{
					func_196(128);
				}
			}
		}
		iVar0++;
	}
}

void func_517()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (!unk_0x839E00E966CE3F2D())
	{
		return;
	}
	if (unk_0x3F6A5B7803413D6A(false, 0) != 1)
	{
		if (func_518(1, 0, 1))
		{
			if (unk_0x9E6BB98E57150635(0) <= 1)
			{
				unk_0xE5CBFFB5DE87586F(1);
			}
		}
	}
}

bool func_518(int iParam0, bool bParam1, bool bParam2)
{
	return func_519(0, iParam0, 1, bParam1, bParam2);
}

int func_519(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_523(iParam0) - func_522(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_522(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_523(iParam0) - func_521(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_522(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_523(iParam0) - func_522(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_520(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
			break;
		
		case 1:
			return Global_1666891.f_2;
			break;
		
		case 2:
			return Global_1666891.f_3;
			break;
	}
	return 0;
}

int func_522(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_219;
			}
			else
			{
				return unk_0x3F6A5B7803413D6A(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_220;
			}
			else
			{
				return unk_0x6D465F7CB16AFBB2(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_221;
			}
			else
			{
				return unk_0x42AE3F61BF594E6C(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
			break;
		
		case 1:
			return Global_1666900;
			break;
		
		case 2:
			return Global_1666901;
			break;
	}
	return 0;
}

bool func_524(int iParam0)
{
	return func_491(iLocal_52, iParam0);
}

void func_525(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xE16824A2A0B2A6D8() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_100681.f_20, 2)) || BitTest(Global_100681.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_526(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xE16824A2A0B2A6D8();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_526(var uParam0)
{
	func_527(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_527(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_452(*uParam0))
		{
			case 0:
				unk_0x852EC2A7DE66202D(uParam2);
				break;
			
			case 1:
				unk_0x28818732C8F0F80E(uParam1);
				break;
			
			case 2:
				unk_0x14004648CB41E983(sParam1);
				break;
			
			case 3:
				unk_0xEBA1698B77FD0A86(sParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC0B5FC4796023855(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x7F2BD159A7FF94C0(sParam1);
				break;
			
			case 6:
				unk_0xF6AFEDAAE44A2159(sParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xD9C38C2E8E7C8C13(uParam2);
				break;
			
			case 8:
				unk_0xA3C681843B51A4CC(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x10FC49B73AEEBE87();
				break;
			
			default:
				break;
		}
		unk_0xECDAB41968FF21A8(uParam0, 29);
	}
}

void func_528(int iParam0)
{
	if (func_491(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_529()
{
	func_2(0);
	if (unk_0x7DE17ACDD8BA2642(iLocal_96))
	{
		if (!unk_0x055111B11E6624FD(iLocal_96, 0))
		{
			func_2(1);
		}
		else
		{
			func_492("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_492("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		func_2(0);
		func_492("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_530(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_534();
			}
			else
			{
				return 0;
			}
		}
		if (!func_533(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_534();
					}
					else
					{
						return 0;
					}
				}
				if (func_532())
				{
					if (!bParam2)
					{
						func_534();
					}
					else
					{
						return 0;
					}
				}
				if (func_531(157))
				{
					if (!bParam2)
					{
						func_534();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_534();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_534();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_534();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_531(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_532()
{
	return Global_2683862.f_693;
}

bool func_533(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_534()
{
	unk_0x675D9C12C73D3DE7();
}

void func_535()
{
	func_196(1);
}

void func_536(var uParam0)
{
	func_540();
	if (func_48(0, 1))
	{
		unk_0xEF54B7007CB2210B(1);
	}
	if (!unk_0x66599E73DBA5A850(iLocal_96))
	{
		if (unk_0x1AFE963DA61006ED(iLocal_96))
		{
			if ((func_551() && unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_smart_flee_ped")) != 1) && unk_0xF5F493B789EA063E(iLocal_96, -251125078) != 1)
			{
				unk_0x984708151807AC6D(iLocal_96, 1193033728, 0);
				if (unk_0xB6B927AA8C3DAD36(iLocal_96))
				{
					unk_0x71A535529C1CA5DF(iLocal_96, 1);
				}
				if (unk_0x9153FB897534EB0D(iLocal_96))
				{
					unk_0x1EEF71E3CDD868D3(&iLocal_96);
				}
				unk_0x90B639B1CCB1446C(iLocal_96);
			}
			else
			{
				if (unk_0x9153FB897534EB0D(iLocal_96))
				{
					unk_0x1EEF71E3CDD868D3(&iLocal_96);
				}
				unk_0x90B639B1CCB1446C(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_491(iLocal_49, 64))
	{
		Global_32317 = 0;
	}
	if (!unk_0x66599E73DBA5A850(iLocal_97))
	{
		unk_0x909F139DC199D8E0(iLocal_97);
	}
	iLocal_97 = 0;
	iLocal_296 = 0;
	if (func_491(iLocal_49, 2048))
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	if (!func_539())
	{
		func_538();
	}
	if (func_551())
	{
		if (unk_0xB504838E273ABA87(uLocal_85))
		{
			unk_0x72D15191FDAEBD63(uLocal_85);
		}
	}
	iLocal_98 = 0;
	func_540();
	func_537();
	Global_32318 = 0f;
	if (!Global_1956139.f_5602 && !Global_1956139.f_5606)
	{
		unk_0x3EF548873C55CA64();
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		unk_0xBED533B930EE6D8E(unk_0x93E99A2DBCBA9CFA(), 1);
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (func_524(256))
		{
			unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 6, iLocal_86, iLocal_87, 0);
			func_196(1024);
		}
	}
	if (func_470("PROS_ACCEPT") && !Global_32315)
	{
		unk_0xCD3C8E1022864F65(1);
	}
	if (Global_32319 == unk_0xAF908D5E2416DA93())
	{
		Global_32315 = 0;
		Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_431 = 0;
	}
	func_447(uParam0, 0);
	if (func_551())
	{
		func_196(2048);
	}
	else
	{
		unk_0x675D9C12C73D3DE7();
	}
}

void func_537()
{
}

void func_538()
{
	if (Global_2672505.f_946.f_10)
	{
		Global_2672505.f_946.f_10 = 0;
	}
}

bool func_539()
{
	return BitTest(Global_1963021, 3);
}

void func_540()
{
}

void func_541(bool bParam0)
{
	if (!unk_0x66599E73DBA5A850(iLocal_96))
	{
		if (unk_0x3C3D6D026CF7F51B(iLocal_96, 0))
		{
			if (unk_0xF5F493B789EA063E(iLocal_96, joaat("script_task_leave_any_vehicle")) != 1)
			{
				unk_0x6FE9A0C01D25F413(iLocal_96, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_551())
			{
				if (unk_0x1AFE963DA61006ED(iLocal_96))
				{
					if (unk_0x9153FB897534EB0D(iLocal_96))
					{
						if (unk_0xDD2D9A241E18E942(unk_0x1CFC8878ACB6B610(iLocal_96)))
						{
							unk_0x71A535529C1CA5DF(iLocal_96, 1);
						}
					}
				}
			}
			else
			{
				unk_0x71A535529C1CA5DF(iLocal_96, 1);
			}
		}
	}
}

void func_542()
{
	if (!func_551())
	{
		if (iLocal_295 == 11 || iLocal_295 == 13)
		{
			return;
		}
	}
	if (!unk_0x055111B11E6624FD(iLocal_96, 0))
	{
		if (!unk_0xC78375EA6037A7DB(iLocal_96))
		{
			func_96(0);
			iLocal_294 = 1;
		}
		if (func_551())
		{
			if (unk_0xB6B927AA8C3DAD36(iLocal_96))
			{
				unk_0xC5B2830898581862(iLocal_96, 0);
				unk_0x3088EBAF25E87109(iLocal_96);
			}
		}
		else
		{
			unk_0x3088EBAF25E87109(iLocal_96);
		}
		unk_0x30DD6664AAB84202(iLocal_96, 0);
	}
	if (unk_0xFBD273FDBCF0C5BD(iLocal_99, 0) && !unk_0x055111B11E6624FD(iLocal_99, 0))
	{
		if (func_551())
		{
			if (unk_0xB6B927AA8C3DAD36(iLocal_99))
			{
				if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_33 <= 0 && !BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_31, 11))
				{
					unk_0x82245EF98F7038E8(iLocal_99, 0);
					unk_0xDAF60DD724E215CF(iLocal_99, 3);
					unk_0x9D4246E0B1F8A19C(iLocal_99, 0);
				}
				unk_0x495ED6976429C1E8(iLocal_99, 1, 0);
			}
		}
		else
		{
			unk_0x82245EF98F7038E8(iLocal_99, 0);
			unk_0xDAF60DD724E215CF(iLocal_99, 3);
			unk_0x9D4246E0B1F8A19C(iLocal_99, 0);
		}
	}
	func_550(iLocal_76);
	func_550(iLocal_77);
	func_550(iLocal_78);
	func_550(iLocal_79);
	func_550(iLocal_80);
	func_550(iLocal_81);
	func_550(iLocal_82);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
		if ((func_551() && iLocal_297 != 3) && func_491(iLocal_49, 2048))
		{
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		}
		unk_0xAD4CEC14FE6404F6(unk_0xC1A5EC5C986B98AD(), 1);
		unk_0xB3FF3200DBD1FC87(unk_0xC1A5EC5C986B98AD(), 1);
	}
	if (func_491(iLocal_49, 2048))
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x3210A569BAF257BB(2, 19, 1);
	unk_0x3210A569BAF257BB(2, 37, 1);
	if (!func_539())
	{
		func_538();
	}
	iLocal_296 = 0;
	if (func_491(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_32315 = 0;
		Global_32316 = 0;
		Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_431 = 0;
	}
	if (func_491(iLocal_49, 8))
	{
		if (unk_0xA6FA26A80B445074(func_92()))
		{
			unk_0x1401DAE4BB7FBFCD(func_92());
		}
	}
	func_549();
	func_468();
	if (((func_470("PROS_ACCEPT") || func_470("PROS_CAM_TOG")) || func_470("PROS_RESPONSE")) || func_470("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0xCD3C8E1022864F65(1);
	}
	func_362(0);
	unk_0x61F7D56FFAFBF706(1);
	if (func_491(iLocal_49, 8))
	{
		if (unk_0xA6FA26A80B445074(func_92()))
		{
			unk_0x1401DAE4BB7FBFCD(func_92());
		}
	}
	func_131("PROSTITUTES_SOLICIT_SCENE");
	unk_0x214F8822B61C46FE();
	func_123(0);
	unk_0xEF54B7007CB2210B(1);
	func_543();
	if (func_551())
	{
		if (func_524(2))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0xC59A2EB21A3834E2(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
				{
					if (unk_0xB6B927AA8C3DAD36(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					{
						unk_0x1557CFD5854E2967(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0);
						unk_0x439314AD4FC79186(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1);
					}
				}
			}
			else if (unk_0xC59A2EB21A3834E2(iLocal_99))
			{
				if (unk_0xB6B927AA8C3DAD36(iLocal_99))
				{
					unk_0x439314AD4FC79186(iLocal_99, 1);
					unk_0x1557CFD5854E2967(iLocal_99, 0);
					unk_0x076678BABC7BF47F(iLocal_99, 0);
				}
				else
				{
					unk_0xBDB0FB8EEE50C9CD(iLocal_99);
					unk_0x439314AD4FC79186(iLocal_99, 1);
					unk_0x1557CFD5854E2967(iLocal_99, 0);
					unk_0x076678BABC7BF47F(iLocal_99, 0);
				}
			}
		}
	}
	func_188(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_543()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_548())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_547(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		unk_0x64AB5E3FDD8C16CB(131, func_546(), 0f);
		unk_0x64AB5E3FDD8C16CB(117, func_545(), 0f);
		unk_0x64AB5E3FDD8C16CB(118, func_544(), 0f);
	}
}

int func_544()
{
	return iLocal_46;
}

int func_545()
{
	return iLocal_45;
}

int func_546()
{
	return 0;
}

int func_547(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x67EBFCF2F78761B9())
	{
	}
	if ((!unk_0x2BD01C3CAF96EB66() && (unk_0x1D05BD8EFF80B3E3() || !unk_0x2367D34D8582249E())) && unk_0x9CCA2C4CB2E405AE())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE52BCF7D5014E06E())
			{
				Var69 = { func_318(unk_0x93E99A2DBCBA9CFA()) };
				if (unk_0x7DD2CE58D33238D9(&Var69))
				{
					if (unk_0xEB463FCE742A28B2(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xA26A9A07F761D8F8() && Global_2692733.f_3)
			{
				unk_0x598DA40EF1AD2575(&Var0, &(Global_1935368.f_10));
			}
			else
			{
				unk_0x5BD9D15E4CD3C15B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x2BD01C3CAF96EB66())
	{
	}
	if (!unk_0x1D05BD8EFF80B3E3())
	{
	}
	if (unk_0x2367D34D8582249E())
	{
	}
	if (!unk_0x9CCA2C4CB2E405AE())
	{
	}
	return 0;
}

int func_548()
{
	if ((unk_0x67EBFCF2F78761B9() && unk_0x7FFBE14C34D75E19()) && unk_0x3FFDF8D1413D95DE())
	{
		return 1;
	}
	return 0;
}

void func_549()
{
	if (func_491(iLocal_49, 128))
	{
		func_405(39, 0);
		func_405(40, 0);
		func_405(41, 0);
		func_405(42, 0);
		func_405(43, 0);
		func_405(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_550(int iParam0)
{
	if (func_551())
	{
		if (func_219(iParam0))
		{
			unk_0x5A691093FF311F77(iParam0);
		}
	}
}

bool func_551()
{
	return func_524(1);
}

bool func_552(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_553(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (func_208(iParam0, 1, 1))
	{
		iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x3C3D6D026CF7F51B(iVar0, iParam1))
		{
			uVar3 = unk_0x95DC39736F6748E3(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				uVar2 = unk_0xADCF72047FEB806E(iVar1);
				if (func_208(uVar2, 1, 1))
				{
					if (unk_0xF2CFBB1105511E1A(uVar2) != iVar0)
					{
						if (unk_0xE0D346789C5160EB(unk_0xF2CFBB1105511E1A(iVar2), uVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_554(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853910[iParam0 /*862*/] == 2 || Global_1853910[iParam0 /*862*/] == 1) || Global_1853910[iParam0 /*862*/] == 0) || Global_1853910[iParam0 /*862*/] == 3) || Global_1853910[iParam0 /*862*/] == 8)
	{
		return 1;
	}
	return 0;
}

