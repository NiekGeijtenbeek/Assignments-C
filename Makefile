.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment1_1 - Debug ]----------"
	@cd "Assignment11" && "$(MAKE)" -f  "Assignment1_1.mk"
clean:
	@echo "----------Cleaning project:[ Assignment1_1 - Debug ]----------"
	@cd "Assignment11" && "$(MAKE)" -f  "Assignment1_1.mk" clean
