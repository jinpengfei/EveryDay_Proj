#!/usr/bin/python3
# -*- coding: iso-8859-15 -*-
import pygame

class Ship():
	def __init__(self, ai_settings,screen):
		self.screen = screen
		self.ai_settings = ai_settings
		self.image = pygame.image.load('images/ship.png')
		self.rect = self.image.get_rect()
		self.screen_rect = screen.get_rect()
		self.rect_centerx = self.screen_rect.centerx
		self.rect.bottom = self.screen_rect.bottom
		self.moving_right = False
		self.moving_left = False
		self.center = float(self.rect.centerx)

	def update(self):
		"""根据移动标志调整飞船的位置"""
		if self.moving_right and self.rect.right < self.screen_rect.right:
			self.center += self.ai_settings.ship_speed_factor
		if self.moving_left and self.rect.left >0:
			self.center -= self.ai_settings.ship_speed_factor
		self.rect.centerx = self.center
	def blitme(self):
		self.screen.blit(self.image, self.rect)
